<?php
/**
 * @file
 * beekeeper_hives.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_hives_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_hive_inspect_details'.
  $field_instances['user-user-field_hive_inspect_details'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter details of your availability to inspect hives.  Members looking for someone to inspect their hives will see you name and phone number along with these details. Only plain text will be displayed, although line breaks will be shown.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_hive_inspect_details',
    'label' => 'Hive inspect details',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_html' => 'advanced_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_html' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_hive_inspection'.
  $field_instances['user-user-field_hive_inspection'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Indicate whether you are willing to inspect other members\' hives for diseases, including for their annual disease return.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_hive_inspection',
    'label' => 'Hive inspection',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 21,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter details of your availability to inspect hives.  Members looking for someone to inspect their hives will see you name and phone number along with these details. Only plain text will be displayed, although line breaks will be shown.');
  t('Hive inspect details');
  t('Hive inspection');
  t('Indicate whether you are willing to inspect other members\' hives for diseases, including for their annual disease return.');

  return $field_instances;
}
