<?php

/**
 * @file
 * Page callbacks for the membership_entity_term module.
 */

/**
 * Add term options to the membership settings form.
 */
function _membership_entity_term_settings_form(&$form, &$form_state, $data) {
  // Provide some defaults.
  $data += array(
    'available_term_lengths' => array(),
  );

  // Add membership term lengths.
  if (!isset($form_state['membership_entity_term']['available_term_lengths'])) {
    $form_state['membership_entity_term']['available_term_lengths'] = $data['available_term_lengths'];
  }

  $form['term_lengths'] = array(
    '#type' => 'fieldset',
    '#title' => t('Membership Term Lengths'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
    '#description' => t('Select the term lengths that will be available for this membership type.'),
  );

  $wrapper_id = 'available-term-lengths-wrapper';
  $form['term_lengths']['available_term_lengths'] = array(
    '#theme' => 'membership_entity_term_available_term_lengths_element',
    '#id' => 'membership-entity-term-lengths',
    '#prefix' => '<div id="' . $wrapper_id . '">',
    '#suffix' => '</div>',
    '#element_validate' => array('membership_entity_term_length_element_validate'),
  );

  foreach ($form_state['membership_entity_term']['available_term_lengths'] as $delta => $term_length) {
    $form['term_lengths']['available_term_lengths'][$delta] = array(
      'term_length' => array(
        '#type' => 'value',
        '#value' => $term_length,
      ),
      'example' => array(
        '#markup' => ($term_length == 'lifetime') ? t('N/A') : format_date(strtotime($term_length), 'custom', 'Y-m-d H:i:s O'),
      ),
      'weight' => array(
        '#type' => 'weight',
        '#title' => t('Weight for term length @term_length', array('@term_length' => $term_length)),
        '#title_display' => 'invisible',
        '#default_value' => $delta,
      ),
      'remove' => array(
        '#type' => 'submit',
        '#value' => t('Remove'),
        '#name' => 'available_term_lengths_remove_' . $delta,
        '#delta' => $delta,
        '#submit' => array('membership_entity_term_length_remove'),
        '#limit_validation_errors' => array(),
        '#ajax' => array(
          'callback' => 'membership_entity_term_length_ajax_callback',
          'wrapper' => $wrapper_id,
          'effect' => 'fade',
        ),
      ),
    );
  }

  $form['term_lengths']['term_length_options'] = array(
    '#type' => 'select',
    '#title' => t('Term length'),
    '#options' => array(
      '1 day' => t('1 day'),
      '1 week' => t('1 week'),
      '1 month' => t('1 month'),
      '3 months' => t('3 months'),
      '6 months' => t('6 months'),
      '1 year' => t('1 year'),
      '2 years' => t('2 years'),
      '3 years' => t('3 years'),
      '4 years' => t('4 years'),
      '5 years' => t('5 years'),
      '10 years' => t('10 years'),
      'lifetime' => t('Lifetime'),
      'other' => t('Other'),
    ),
  );

  $form['term_lengths']['custom_term_length'] = array(
    '#type' => 'textfield',
    '#title' => t('Other term length'),
    '#size' => 32,
    '#description' => t('Enter a term length including number and unit (eg. 15 years).'),
    '#states' => array(
      'visible' => array(
        ':input[name="term_lengths[term_length_options]"]' => array('value' => 'other'),
      ),
      'required' => array(
        ':input[name="term_lengths[term_length_options]"]' => array('value' => 'other'),
      ),
    ),
  );

  $form['term_lengths']['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add term length'),
    '#validate' => array('membership_entity_term_length_add_validate'),
    '#submit' => array('membership_entity_term_length_add'),
    '#limit_validation_errors' => array(
      array('term_lengths', 'term_length_options'),
      array('term_lengths', 'custom_term_length'),
    ),
    '#ajax' => array(
      'callback' => 'membership_entity_term_length_ajax_callback',
      'wrapper' => $wrapper_id,
      'effect' => 'fade',
    ),
  );

  $form['#validate'][] = 'membership_entity_term_settings_form_validate';
}

/**
 * Ajax callback to update term lengths.
 */
function membership_entity_term_length_ajax_callback($form, $form_state) {
  return $form['term_lengths']['available_term_lengths'];
}

/**
 * Validate handler to add a term length.
 */
function membership_entity_term_length_add_validate($form, &$form_state) {
  $values = &$form_state['values']['term_lengths'];
  $term_length = $values['term_length_options'];

  if (empty($term_length)) {
    form_set_error('term_lengths][term_length_options', t('Please select a a term length.'));
  }

  // Validate a custom term length.
  if ($term_length == 'other') {
    $term_length = trim($values['custom_term_length']);
    if (!preg_match(MEMBERSHIP_ENTITY_TERM_LENGTH_REGEX, $term_length)) {
      form_set_error('term_lengths][custom_term_length', t('%term_length is not a valid term length. Please enter term lengths as a number and unit (eg. 15 years)', array(
        '%term_length' => $term_length,
      )));
    }
  }

  // Check for duplicates.
  if (in_array($term_length, $form_state['membership_entity_term']['available_term_lengths'])) {
    form_set_error('term_lengths][term_length_options', t('The term length %term_length has already been added.', array(
      '%term_length' => $term_length,
    )));
  }
}

/**
 * Submit handler to add a term length.
 */
function membership_entity_term_length_add($form, &$form_state) {
  $values = $form_state['values']['term_lengths'];
  $term = ($values['term_length_options'] != 'other') ? $values['term_length_options'] : $term = $values['custom_term_length'];
  $form_state['membership_entity_term']['available_term_lengths'][] = check_plain($term);
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler to remove a term length.
 */
function membership_entity_term_length_remove($form, &$form_state) {
  $button = $form_state['triggering_element'];
  if (isset($button['#delta'])) {
    unset($form_state['membership_entity_term']['available_term_lengths'][$button['#delta']]);
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Form validation handler for membership_entity_settings_form().
 */
function membership_entity_term_settings_form_validate($form, &$form_state) {
  $values = &$form_state['values'];

  // Flatten available term lengths.
  if (!empty($values['term_lengths']['available_term_lengths'])) {
    $values['available_term_lengths'] = $values['term_lengths']['available_term_lengths'];
    unset($values['term_lengths']);
  }
}

/**
 * Element validate callback for the available term lengths field.
 */
function membership_entity_term_length_element_validate($element, &$form_state, $form) {
  $items = element_children($element);

  // Make sure at least one term length is selected.
  if (empty($items)) {
    form_error($element, t('You must add at least one term length.'));
    return;
  }

  // Prepare available term_lengths.
  $term_lengths = array();
  foreach ($items as $delta) {
    $term_lengths[$element[$delta]['weight']['#value']] = $element[$delta]['term_length']['#value'];
  }
  ksort($term_lengths);
  form_set_value($element, $term_lengths, $form_state);
}

/**
 * Add term length options to the membership_entity_form.
 */
function membership_entity_term_create_form(&$form, &$form_state) {
  $membership = $form['#membership_entity'];

  if (!empty($membership->is_new)) {
    // Add term fields.
    _membership_entity_term_attach_form($form, $form_state);
    $form['actions']['submit']['#submit'][] = 'membership_entity_term_create_form_submit';
  }
}

/**
 * Submit handler for creating new terms.
 */
function membership_entity_term_create_form_submit($form, &$form_state) {
  $membership = &$form_state['membership_entity'];
  $term = _membership_entity_term_attach_form_submit($form, $form_state);
  membership_entity_term_save($term);
  $membership->terms[$term->id] = $term;
  $form_state['membership_entity_term'] = $term;
}

/**
 * Form builder to edit membership terms.
 */
function membership_entity_term_edit($form, &$form_state, $membership, $term) {
  $form['#membership_entity_term'] = $term;
  $form['#entity_type'] = 'membership_entity_term';
  $form['#attributes']['class'][] = 'membership-entity-term-edit-form';
  $bundle_settings = $form['#bundle_settings'] = membership_entity_get_bundle_settings($membership->type);

  if (empty($form['#bundle_settings'])) {
    return '';
  }

  // Basic information.
  foreach (array('id', 'mid', 'membership_entity_type') as $key) {
    $form[$key] = array(
      '#type' => 'value',
      '#value' => isset($term->{$key}) ? $term->{$key} : NULL,
    );
  }

  // Convert to user's timezone.
  $start = new DateObject($term->start, 'UTC');
  $start->setTimezone(new DateTimeZone(date_default_timezone()));
  $form['start'] = array(
    '#type' => 'date_select',
    '#title' => t('Term start date'),
    '#description' => t('Select the new membership term start date. The term end date will be calculated automatically based on the start date, term length, and any modifiers.'),
    '#date_format' => DATE_FORMAT_DATETIME,
    '#default_value' => date_format_date($start, 'custom', DATE_FORMAT_DATETIME),
    '#date_text_parts' => array('year'),
  );

  $options = drupal_map_assoc($bundle_settings['available_term_lengths']);
  $form['term'] = array(
    '#type' => 'radios',
    '#title' => t('Term length'),
    '#description' => t('Select the new membership term length.'),
    '#default_value' => count($options) <= 1 ? reset($options) : $term->term,
    '#required' => TRUE,
    '#options' => $options,
  );

  $form['status'] = array(
    '#type' => 'radios',
    '#title' => t('Status'),
    '#options' => membership_entity_get_status_list(),
    '#default_value' => $term->status,
    '#required' => TRUE,
  );

  // Add term modifiers.
  if (!isset($form_state['modifiers'])) {
    $form_state['modifiers'] = $term->modifiers;
  }

  $form['modifiers'] = array(
    '#type' => 'fieldset',
    '#title' => t('Term Modifiers'),
    '#description' => t('Modifiers are used to extend or reduce the term length by a set amout of time. eg. +1 month.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
    '#states' => array(
      'invisible' => array(
        ':input[name="term"]' => array('value' => 'lifetime'),
      ),
    ),
  );

  $wrapper_id = 'term-modifiers-wrapper';
  $form['modifiers']['list'] = array(
    '#theme' => 'membership_entity_term_modifiers_element',
    '#id' => 'membership-entity-term-modifiers',
    '#prefix' => '<div id="' . $wrapper_id . '">',
    '#suffix' => '</div>',
  );

  foreach ($form_state['modifiers'] as $delta => $modifier) {
    $form['modifiers']['list'][$delta] = array(
      'value' => array(
        '#type' => 'value',
        '#value' => $modifier,
      ),
      'remove' => array(
        '#type' => 'submit',
        '#value' => t('Remove'),
        '#name' => 'modifiers_remove_' . $delta,
        '#delta' => $delta,
        '#submit' => array('membership_entity_term_modifier_remove'),
        '#limit_validation_errors' => array(),
        '#ajax' => array(
          'callback' => 'membership_entity_term_modifier_ajax_callback',
          'wrapper' => $wrapper_id,
          'effect' => 'fade',
        ),
      ),
    );
  }

  $form['modifiers']['options'] = array(
    '#type' => 'select',
    '#title' => t('Select Modifier'),
    '#options' => array(
      '+1 day' => t('+1 day'),
      '+1 week' => t('+1 week'),
      '+1 month' => t('+1 month'),
      '+3 months' => t('+3 months'),
      '+6 months' => t('+6 months'),
      'other' => t('Other'),
    ),
  );

  $form['modifiers']['custom'] = array(
    '#type' => 'textfield',
    '#title' => t('Other modifier'),
    '#size' => 32,
    '#description' => t('Enter a term modifer sign (+-), number, and unit (eg. +1 month).'),
    '#states' => array(
      'visible' => array(
        ':input[name="modifiers[options]"]' => array('value' => 'other'),
      ),
      'required' => array(
        ':input[name="modifiers[options]"]' => array('value' => 'other'),
      ),
    ),
  );

  $form['modifiers']['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add modifier'),
    '#validate' => array('membership_entity_term_modifier_add_validate'),
    '#submit' => array('membership_entity_term_modifier_add'),
    '#limit_validation_errors' => array(array('modifiers')),
    '#ajax' => array(
      'callback' => 'membership_entity_term_modifier_ajax_callback',
      'wrapper' => $wrapper_id,
      'effect' => 'fade',
    ),
  );

  // Add field UI items.
  field_attach_form('membership_entity_term', $term, $form, $form_state);

  $form['#validate'][] = 'membership_entity_term_edit_form_validate';

  // Add the buttons.
  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 9999,
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save'),
      '#submit' => array('membership_entity_term_edit_form_submit'),
    ),
    'delete' => array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#limit_validation_errors' => array(),
      '#submit' => array('membership_entity_term_edit_form_delete'),
    ),
  );

  return $form;
}

/**
 * Ajax callback to update term modifiers.
 */
function membership_entity_term_modifier_ajax_callback($form, $form_state) {
  return $form['modifiers']['list'];
}

/**
 * Validate handler to add a term modifier.
 */
function membership_entity_term_modifier_add_validate($form, &$form_state) {
  $values = &$form_state['values'];
  $modifier = $values['modifiers']['options'];

  // Validate a custom term length.
  if ($modifier == 'other') {
    $modifier = trim($values['modifiers']['custom']);
    // Multiple intervals in one string (eg. +1 month 1 day) are not supported.
    if (!preg_match(MEMBERSHIP_ENTITY_ACTIVE_MODIFIER_REGEX, $modifier)) {
      form_set_error('modifiers][custom', t('%modifier is not a valid term modifier. Please enter term lengths as a sign (+-), number, and unit (eg. +1 month)', array(
        '%modifier' => $modifier,
      )));
    }
  }
}

/**
 * Submit handler to add a term modifier.
 */
function membership_entity_term_modifier_add($form, &$form_state) {
  $values = $form_state['values'];
  $modifier = ($values['modifiers']['options'] != 'other') ? $values['modifiers']['options'] : $values['modifiers']['custom'];
  $form_state['modifiers'][] = check_plain($modifier);
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler to remove a term modifier.
 */
function membership_entity_term_modifier_remove($form, &$form_state) {
  $button = $form_state['triggering_element'];
  if (isset($button['#delta'])) {
    unset($form_state['modifiers'][$button['#delta']]);
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Validate the membership entity term edit form.
 */
function membership_entity_term_edit_form_validate($form, &$form_state) {
  $values = &$form_state['values'];

  // Prepare available term modifiers.
  if (empty($values['modifiers']['list']) || $values['term'] == 'lifetime') {
    form_set_value($form['modifiers'], array(), $form_state);
  }
  else {
    $modifiers = array_map('_membership_entity_term_modifier_array_map', $values['modifiers']['list']);
    form_set_value($form['modifiers'], $modifiers, $form_state);
  }

  // Convert start date back to UTC.
  $start = new DateObject($values['start'], $form['start']['#date_timezone']);
  $start->setTimezone(new DateTimeZone('UTC'));
  form_set_value($form['start'], date_format_date($start, 'custom', DATE_FORMAT_DATETIME), $form_state);

  // Validate custom fields.
  entity_form_field_validate('membership_entity_term', $form, $form_state);
}

/**
 * Array map callback to return a modifier value.
 */
function _membership_entity_term_modifier_array_map($a) {
  return $a['value'];
}

/**
 * Submit the membership entity term edit form.
 */
function membership_entity_term_edit_form_submit($form, &$form_state) {
  $term = $form['#membership_entity_term'];

  form_state_values_clean($form_state);
  entity_form_submit_build_entity('membership_entity_term', $term, $form, $form_state);
  $status = membership_entity_term_save($term);

  // Add the saved term object to $form_state for other modules.
  $form_state['membership_entity_term'] = $term;
  switch ($status) {
    case SAVED_UPDATED:
      drupal_set_message(t('The membership term has been updated.'));
      $form_state['redirect'] = 'membership/' . $term->mid;
      break;
  }
}

/**
 * Menu callback: Renew an existing membership.
 */
function membership_entity_term_renew($form, &$form_state, $membership) {
  drupal_set_title(t('Renew membership @member_id', array('@member_id' => $membership->member_id)));
  $form['#membership_entity'] = $membership;
  $form['#bundle_settings'] = $bundle_settings = membership_entity_get_bundle_settings($membership->type);
  if (empty($bundle_settings)) {
    return '';
  }

  // Add membership fields.
  form_load_include($form_state, 'inc', 'membership_entity', 'membership_entity.pages');
  membership_entity_form($form, $form_state);

  // Add term fields.
  _membership_entity_term_attach_form($form, $form_state);
  $form['membership_term']['term']['#title'] = t('Renewal term length');

  // Hide fields where the 'membership_entity_term_renew_form' setting is turned off.
  foreach (field_info_instances('membership_entity', $membership->type) as $field_name => $instance) {
    if (empty($instance['settings']['membership_entity_term_renew_form'])) {
      $form[$field_name]['#access'] = FALSE;
    }
  }

  $form['#validate'][] = 'membership_entity_form_validate';
  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 9999,
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Renew'),
      '#submit' => array(
        'membership_entity_edit_form_submit',
        'membership_entity_term_renew_submit',
      ),
    ),
  );

  // Check for a pending renewal.
  $latest_term = end($membership->terms);
  if ($latest_term->status == MEMBERSHIP_ENTITY_PENDING) {
    drupal_set_message(t('Your membership term is currently pending. You will not be able to renew until your term is activated. If you feel that you have received this message in error, please contact a site administrator.'), 'warning');
    $form['actions']['submit']['#value'] .= t(' (disabled)');
    $form['actions']['submit']['#attributes']['disabled'] = 'disabled';
    $form['actions']['submit']['#validate'] = array('membership_entity_term_form_disabled_validate');
  }

  return $form;
}

/**
 * Validation callback to prevent renewal if a term is already pending.
 */
function membership_entity_term_form_disabled_validate($form, &$form_state) {
  form_set_error('submit', t('Your membership term is currently pending. You will not be able to renew until your term is activated. If you feel that you have received this message in error, please contact a site administrator.'));
}

/**
 * Submit handler to renew a membership.
 */
function membership_entity_term_renew_submit($form, &$form_state) {
  $membership = &$form_state['membership_entity'];
  $term = _membership_entity_term_attach_form_submit($form, $form_state);
  membership_entity_term_save($term);
  $membership->terms[$term->id] = $term;
  $form_state['membership_entity_term'] = $term;
}

/**
 * Submit handler to delete a membership term.
 */
function membership_entity_term_edit_form_delete($form, &$form_state) {
  $destination = array();
  if (isset($_GET['destination'])) {
    $destination = drupal_get_destination();
    unset($_GET['destination']);
  }
  $term = $form['#membership_entity_term'];
  $form_state['redirect'] = array(
    "membership/$term->mid/term/$term->id/delete",
    array('query' => $destination),
  );
}

/**
 * Dispaly a confirmation page before delteing a membership term.
 */
function membership_entity_term_delete_confirm($form, &$form_state, $membership, $term) {
  $form_state['membership'] = $membership;
  $form_state['term'] = $term;
  $form['#submit'][] = 'membership_entity_term_delete_confirm_submit';
  return confirm_form($form, t('Are you sure you want to delete this membership term?'), "membership/$term->mid/term/$term->id/edit", t('This action cannot be undone.'), t('Delete'), t('Cancel'));
}

/**
 * Submit the membership term delete confirm form.
 */
function membership_entity_term_delete_confirm_submit($form, &$form_state) {
  $membership = $form_state['membership'];
  $term = $form_state['term'];
  if ($form_state['values']['confirm']) {
    membership_entity_term_delete($term->id);
    drupal_set_message(t('Deleted 1 membership term.'));
  }
  $form_state['redirect'] = 'membership/' . $membership->mid;
}

/**
 * Helper to add term fields to a membership form.
 */
function _membership_entity_term_attach_form(&$form, &$form_state) {
  $membership = $form['#membership_entity'];
  $bundle_settings = $form['#bundle_settings'];

   // Add term fields.
  $form['#membership_entity_term'] = $term = membership_entity_term_create(array(
    'membership_entity_type' => $membership->type,
  ));

  $form['membership_term'] = array(
    '#type' => 'container',
    '#parents' => array('membership_term'),
    '#tree' => TRUE,
    '#attributes' => array(
      'class' => array('membership-enity-term-info'),
    ),
  );

  $options = drupal_map_assoc($bundle_settings['available_term_lengths']);
  $form['membership_term']['term'] = array(
    '#type' => 'radios',
    '#title' => t('Term length'),
    '#description' => t('Select the desired renewal term length.'),
    '#required' => TRUE,
    '#options' => $options,
    '#default_value' => count($options) < 2 ? reset($options) : NULL,
    '#weigth' => -50,
  );

  field_attach_form('membership_entity_term', $term, $form['membership_term'], $form_state);
  $form['#validate'][] = '_membership_entity_term_attach_form_validate';
}

/**
 * Helper to validate term fields on membership forms.
 */
function _membership_entity_term_attach_form_validate($form, &$form_state) {
  ctools_include('fields');

  $entity_type = 'membership_entity_term';
  $term = $form['#membership_entity_term'];
  $bundle = $form['#membership_entity_term']->membership_entity_type;

  // We have to validate each field separately, as the CTools API function is
  // for only a single field.
  $fields = field_info_instances($entity_type, $bundle);
  foreach ($fields as $field_name => $instance) {
    $errors = array();

    // Extract field values from submitted values.
    ctools_field_invoke_field_default($instance, 'extract_form_values', $entity_type, $term, $form['membership_term'], $form_state);

    // Check generic, field-type-agnostic errors first.
    ctools_field_invoke_field_default($instance, 'validate', $entity_type, $term, $errors);

    // Check field-type specific errors.
    ctools_field_invoke_field($instance, 'validate', $entity_type, $term, $errors);

    // Let other modules validate the entity. Cannot use module_invoke_all() as
    // $errors needs to be passed by reference.
    foreach (module_implements('field_attach_validate') as $module) {
      $function = $module . '_field_attach_validate';
      $function($entity_type, $term, $errors);
    }

    if (!empty($errors)) {
      foreach ($errors as $field_errors) {
        foreach ($field_errors as $langcode => $errors) {
          $field_state = field_form_get_state($form['membership_term']['#parents'], $field_name, $langcode, $form_state);
          $field_state['errors'] = $errors;
          field_form_set_state($form['membership_term']['#parents'], $field_name, $langcode, $form_state, $field_state);
        }
      }
      ctools_field_invoke_field_default($instance, 'form_errors', $entity_type, $term, $form['membership_term'], $form_state);
    }
  }
}

/**
 * Helper to submit term fields on a membership form.
 *
 * @return MembershipEntityTerm
 *   The poputlated term objcet. Calling membership_entity_save() is left to
 *   the caller.
 */
function _membership_entity_term_attach_form_submit($form, &$form_state) {
  ctools_include('fields');

  $entity_type = 'membership_entity_term';
  $term = $form['#membership_entity_term'];
  $bundle = $term->membership_entity_type;
  $membership = $form['#membership_entity'];

  // Add the new membership term.
  $term->mid = $membership->mid;
  $term->term = $form_state['values']['membership_term']['term'];

  // Add the start date.
  $latest_term = end($membership->terms);
  $now = new DateObject('now', 'UTC');
  if (!empty($latest_term) && $latest_term->status == MEMBERSHIP_ENTITY_ACTIVE && $latest_term->end > $now) {
    $term->start = $latest_term->end;
  }
  else {
    $term->start = date_format_date($now, 'custom', DATE_FORMAT_DATETIME);
  }

  if ($membership->status == MEMBERSHIP_ENTITY_PENDING) {
    $term->status = MEMBERSHIP_ENTITY_PENDING;
  }
  else if (strtotime($term->start) >= REQUEST_TIME) {
    $term->status = MEMBERSHIP_ENTITY_ACTIVE;
  }
  else {
    $term->status = MEMBERSHIP_ENTITY_EXPIRED;
  }

  $fields = field_info_instances($entity_type, $bundle);
  foreach ($fields as $field_name => $instance) {
    // Extract field values from submitted values.
    // We pass a partial $form array to the Field API hook. This contains at
    // its base the #parents array, which tells Field API where to look for
    // the values in $form_state.
    ctools_field_invoke_field_default($instance, 'extract_form_values', $entity_type, $term, $form['membership_term'], $form_state);
    ctools_field_invoke_field_default($instance, 'submit', $entity_type, $term, $form['membership_term'], $form_state);
  }

  return $term;
}
