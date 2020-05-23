<?php

/**
 * Menu callback for the beekeeper custom settings form
 *
 * @ingroup forms
 */
function beekeeper_custom_settings_form() {

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Beekeeper settings'),
  );

  $form['settings']['beekeeper-membership-renewal-open'] = array(
    '#type' => 'textfield',
    '#title' => t('Renewals from:'),
    '#description' => t('Specify the date (mmdd) on which membership renewal will be open.'),
    '#default_value' => variable_get('beekeeper-membership-renewal-open', '0531'),
  );
  $form['settings']['mlmmj-members-list'] = array(
    '#type' => 'textfield',
    '#title' => t('MLMMJ members list:'),
    '#description' => t('Specify the absolute path to the beekeepers members mlmmj list.'),
    '#default_value' => variable_get('mlmmj-members-list', '/var/spool/mlmmj/beehive.org.nz/members'),
  );
  $form['settings']['mlmmj-committee-list'] = array(
    '#type' => 'textfield',
    '#title' => t('MLMMJ committee list:'),
    '#description' => t('Specify the absolute path to the beekeepers committee mlmmj list.'),
    '#default_value' => variable_get('mlmmj-committee-list', '/var/spool/mlmmj/beehive.org.nz/committee'),
  );

  $form['settings']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset to defaults'),
    '#submit' => array('beekeeper_custom_stttings_delete'),
  );

  return system_settings_form($form);
}
