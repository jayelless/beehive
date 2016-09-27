<?php
/**
 * Created by PhpStorm.
 * User: james
 * Date: 28/07/16
 * Time: 9:40 PM
 */

/**
 * Implementation of hook_rules_condition_info().
 */
function beekeeper_custom_rules_condition_info() {
  return array(
    'beekeeper_custom_rules_condition_send_renewal_notifications' => array(
      'label' => t('Send renewal notification emails?'),
      'group' => t('Beekeeper Custom'),
    ),
    'beekeeper_custom_rules_condition_send_lapse_notifications' => array(
      'label' => t('Send lapse notification emails?'),
      'group' => t('Beekeeper Custom'),
    ),
  );
}

/**
 * Condition to make sure membership renewal notifications are sent out on the 1st of June,
 * and uses a "renewal_notifications_sent" variable to make sure the notifications are only sent out
 * once no matter how many times cron is run that day.
 */
function beekeeper_custom_rules_condition_send_renewal_notifications() {
  $today = date('z');
  $renewal_date = date('z', strtotime("1 June this year"));
  if($today==$renewal_date){
    if(strcmp(variable_get('renewal_notifications_sent'), 'true')!=0){
      variable_set('renewal_notifications_sent', 'true');
      return true;
    }else{
      return false;
    }

  }else{
    variable_set('renewal_notifications_sent', 'false');
    return false;
  }

}

/**
 * Condition to make sure membership lapsed notifications are sent out on the 1st of August,
 * and uses a "lapse_notifications_sent" variable to make sure the notifications are only sent out
 * once no matter how many times cron is run that day.
 */
function beekeeper_custom_rules_condition_send_lapse_notifications() {
  $today = date('z');
  $renewal_date = date('z', strtotime("1 August this year"));
  if($today==$renewal_date){
    if(strcmp(variable_get('lapse_notifications_sent'), 'true')!=0){
      variable_set('lapse_notifications_sent', 'true');
      return true;
    }else{
      return false;
    }

  }else{
    variable_set('lapse_notifications_sent', 'false');
    return false;
  }

}


/**
 * Implements hook_action_info().
 */
function beekeeper_custom_rules_action_info() {
  return array(
    'beekeeper_custon_rules_action_send_mail_to_members' => array(
      'label' => t('Send mail to all members with specifed status'),
      'group' => t('Beekeeper custom'),
      'parameter' => array(
        'types' => array(
          'type' => 'list<integer>',
          'label' => t('Types'),
          'options list' => 'beekeeper_custom_membership_type_list',
          'description' => t('Select the membership types of users to receive the mail.'),
        ),
        'status' => array(
          'type' => 'list<integer>',
          'label' => t('Status'),
          'options list' => 'membership_entity_get_status_list',
          'description' => t('Select the membership status of users to receive the mail.'),
        ),
        'roles' => array(
          'type' => 'list<integer>',
          'label' => t('Roles'),
          'options list' => 'entity_metadata_user_roles',
          'description' => t('Select the roles of users to receive the mail.'),
        ),
        'subject' => array(
          'type' => 'text',
          'label' => t('Subject'),
          'description' => t("The mail's subject."),
        ),
        'message' => array(
          'type' => 'text',
          'label' => t('Message'),
          'description' => t("The mail's message body."),
        ),
        'from' => array(
          'type' => 'text',
          'label' => t('From'),
          'description' => t("The mail's from address. Leave it empty to use the site-wide configured address."),
          'optional' => TRUE,
        ),
      ),
      //'base' => 'rules_action_mail_to_users_of_role',
      //'access callback' => 'rules_system_integration_access',
    ),
    'beekeeper_custon_rules_action_update_role_of_members' => array(
      'label' => t('Update user roles for members with specified status'),
      'group' => t('Beekeeper custom'),
      'parameter' => array(
        'types' => array(
          'type' => 'list<integer>',
          'label' => t('Types'),
          'options list' => 'beekeeper_custom_membership_type_list',
          'description' => t('Select the membership types of users to receive the mail.'),
        ),
        'status' => array(
          'type' => 'list<integer>',
          'label' => t('Status'),
          'options list' => 'membership_entity_get_status_list',
          'description' => t('Select the membership status of users to receive the mail.'),
        ),
        'roles' => array(
          'type' => 'list<integer>',
          'label' => t('Roles'),
          'options list' => 'entity_metadata_user_roles',
          'description' => t('Select the roles of users to receive the mail.'),
        ),
        'assign' => array(
          'type' => 'list<integer>',
          'label' => t('Assign'),
          'optional' => TRUE,
          'options list' => 'entity_metadata_user_roles',
          'description' => t('Select the roles to be assigned to members accounts.'),
        ),
        'remove' => array(
          'type' => 'list<integer>',
          'label' => t('Remove'),
          'optional' => TRUE,
          'options list' => 'entity_metadata_user_roles',
          'description' => t('Select the roles to be removed from members accounts.'),
        ),
      ),
    ),
  );
}

/**
 * Function to send email to users with specified roles and memberships of specified type and status vsalues
 */
function beekeeper_custon_rules_action_send_mail_to_members($types, $status, $roles, $subject, $message, $from = NULL, $settings, RulesState $state, RulesPlugin $element) {
  // Check the from value
  $from = !empty($from) ? str_replace(array("\r", "\n"), '', $from) : NULL;

  watchdog('beekeeper', 'Send email to members from %from with subject %subject.',
    array('%from' => $from, '%subject' => $subject));


  // Convert arrays of type, status and role values to lists
  $tids = implode(',', $types);
  $sids = implode(',', $status);
  $rids = implode(',', $roles);

  // Avoid sending multiple emails to members of two or more target role groups.
  $sql = 'SELECT DISTINCT u.mail FROM {users} u ';
  $sql .= 'LEFT JOIN {users_roles} r ON r.uid = u.uid ';
  $sql .= 'LEFT JOIN {membership_entity} me ON me.uid = u.uid ';
  $sql .= 'LEFT JOIN {membership_entity_type} mt ON mt.type = me.type ';
  $sql .= 'WHERE r.rid IN (' . $rids . ') ';
  $sql .= 'AND me.status IN (' . $sids . ') ';
  $sql .= 'AND mt.id IN (' . $tids . ')';

  $result = db_query($sql);

  // Now, actually send the mails.
  $params = array(
    'subject' => $subject,
    'message' => $message,
  );
  // Set a unique key for this mail.
  $name = isset($element->root()->name) ? $element->root()->name : 'unnamed';
  $key = 'rules_action_mail_to_users_of_role_' . $name . '_' . $element->elementId();  $languages = language_list();

  $count = 0;
  $message = array('result' => TRUE);
  foreach ($result as $row) {
    $message = drupal_mail('rules', $key, $row->mail, language_default(), $params, $from);
    // If $message['result'] is FALSE, then it's likely that email sending is
    // failing at the moment, and we should just abort sending any more. If
    // however, $mesage['result'] is NULL, then it's likely that a module has
    // aborted sending this particular email to this particular user, and we
    // should just keep on sending emails to the other users.
    // For more information on the result value, see drupal_mail().
    if ($message['result'] === FALSE) {
      break;
    }
    $count++;
  }
  if ($message['result'] !== FALSE) {
    $type_names = array_intersect_key(beekeeper_custom_membership_type_list(), array_flip($types));
    $status_names = array_intersect_key(membership_entity_get_status_list(), array_flip($status));
    $role_names = array_intersect_key(user_roles(TRUE), array_flip($roles));
    watchdog('beekeeper', 'Successfully sent email to %count members having role(s) %roles, with membership type(s) %type in status(es) %status.',
      array('%count' => $count, '%roles' => implode(', ', $role_names), '%type' => implode(', ', $type_names), '%status' => implode(', ', $status_names)));
  }
}

/**
 * Function to change user role of members with specified membership type and status values
 */
function beekeeper_custon_rules_action_update_role_of_members($types, $status, $roles, $assign, $remove, $settings, RulesState $state, RulesPlugin $element) {

  if (count($assign) > 0) {
    $assign_names = array_intersect_key(user_roles(TRUE), array_flip($assign));
  }
  else {
    $assign_names = array('<none>');
  }
  if (count($remove) > 0) {
    $remove_names = array_intersect_key(user_roles(TRUE), array_flip($remove));
  }
  else {
    $remove_names = array('<none>');
  }
  watchdog('beekeeper', 'Update member accounts to assign roles %assign and remove roles %remove.',
    array('%assign' => implode(', ', $assign_names), '%remove' => implode(', ', $remove_names)));

  // Convert arrays of type, status and role values to lists
  $tids = implode(',', $types);
  $sids = implode(',', $status);
  $rids = implode(',', $roles);

  // Build an SQL statement to select the required users
  $sql = 'SELECT DISTINCT u.uid FROM {users} u ';
  $sql .= 'LEFT JOIN {users_roles} r ON r.uid = u.uid ';
  $sql .= 'LEFT JOIN {membership_entity} me ON me.uid = u.uid ';
  $sql .= 'LEFT JOIN {membership_entity_type} mt ON mt.type = me.type ';
  $sql .= 'WHERE r.rid IN (' . $rids . ') ';
  $sql .= 'AND me.status IN (' . $sids . ') ';
  $sql .= 'AND mt.id IN (' . $tids . ')';

  $result = db_query($sql);

  $roles = user_roles(TRUE); // array of $rid => $role_name

  $count = 0;
  foreach ($result as $row) {
    $account = user_load($row->uid);
    $save = FALSE;

    // Assign any required roles to the user if not already present
    foreach ($assign as $rid) {
      if (!array_key_exists($rid, $account->roles)) {
        $account->roles[$rid] = $roles[$rid];
        $save = TRUE;
      }
    }

    // Remove any specified role if the user already has it.
    foreach ($remove as $rid) {
      if (array_key_exists($rid, $account->roles)) {
        unset($account->roles[$rid]);
        $save = TRUE;
      }
    }

    if ($save) {
      user_save($account, array('roles' => $account->roles));
      $count++;
    }

  }

  if ($count > 0) {
    $type_names = array_intersect_key(beekeeper_custom_membership_type_list(), array_flip($types));
    $status_names = array_intersect_key(membership_entity_get_status_list(), array_flip($status));
    $role_names = array_intersect_key(user_roles(TRUE), array_flip($roles));
    watchdog('beekeeper', 'Successfully updated roles for %count members having role(s) %roles, with membership type(s) %type in status(es) %status.',
      array('%count' => $count, '%roles' => implode(', ', $role_names), '%type' => implode(', ', $type_names), '%status' => implode(', ', $status_names)));
  }
}
