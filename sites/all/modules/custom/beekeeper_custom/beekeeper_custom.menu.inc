<?php
/**
 * Created by PhpStorm.
 * User: james
 * Date: 12/03/17
 * Time: 5:26 PM
 *
 * Menu callback functions
 */

function beekeeper_custom_menu_join_club() {
  global $user;
  if ($user->uid) {
    // Check to see if user already has a membership - if so, then cannot join the club again
    $sql = 'SELECT mid,type FROM {membership_entity} WHERE uid = :uid ORDER BY mid DESC LIMIT 1';
    $result = db_query($sql, array(':uid' => $user->uid))->fetchAllKeyed();
    if ($result) {
      drupal_set_message(t('You are already a member of the club.'));
      drupal_goto('home');
    }
  }
  // Join the club
  drupal_goto('user/join');
}

function beekeeper_custom_menu_renew_membership() {
  global $user;
  if ($user->uid) {
    // Check to see if user already has a membership - if not, then need to join the club first
    $sql = 'SELECT mid,type FROM {membership_entity} WHERE uid = :uid ORDER BY mid DESC LIMIT 1';
    $result = db_query($sql, array(':uid' => $user->uid))->fetchAllKeyed();
    if ($result) {
        // Use the latest membership is available
       $mid = reset(array_keys($result));
       $type = reset($result);
      // Check if user has a membership type that can be renewed
      if ($type == 'standard_membership' || $type =='junior_membership') {
        $sql = 'SELECT id,status FROM {membership_entity_term} WHERE mid = :mid ORDER BY id DESC LIMIT 1';
        $terms = db_query($sql, array(':mid' => $mid))->fetchAll();
        $term = reset($terms);
        $month_day = date('md');
        if ($term->status == 0 ||  $month_day >= variable_get('beekeeper-membership-renewal-open','0531')) {
          drupal_goto('membership/' . $mid . '/renew');
        }
        drupal_set_message(t('Your membership does not need renewing yet. Please wait until it has expired.'));
        drupal_goto('home');
      }
      drupal_set_message(t('Your membership category cannot be renewed.'));
      drupal_goto('home');
    }
    else {
      drupal_set_message(t('Please join the club first.'));
      beekeeper_custom_menu_join_club();
    }
  }
}
