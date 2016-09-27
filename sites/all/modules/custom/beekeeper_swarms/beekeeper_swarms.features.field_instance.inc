<?php
/**
 * @file
 * beekeeper_swarms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_swarms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_swarm_collect_details'.
  $field_instances['user-user-field_swarm_collect_details'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter details such as the times you are available to collect, and the areas you will collect from.  People needing a swarm collected will see your name and phone number(s) along with this information. Only plain text will be displayed, although line breaks will be shown.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_collect_details',
    'label' => 'Swarm collect details',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_swarm_collector'.
  $field_instances['user-user-field_swarm_collector'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Tick the box if you are willing to collect swarms.  Please also fill in the details of your availability in the swarm collection details field.  Please note, that you should also set your location details so that you will be listed for swarms in your vicinity.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_collector',
    'label' => 'Swarm collector',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_swarm_receipt_details'.
  $field_instances['user-user-field_swarm_receipt_details'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter details of your availability to receive swarms.  Only plain text will be displayed, although line breaks will be shown.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_receipt_details',
    'label' => 'Swarm receipt details',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_html' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_swarm_recipient'.
  $field_instances['user-user-field_swarm_recipient'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Tick this box if you would like to receive surplus swarms. Please also fill in the details of your availability in the swarm receipt details field. Please note, that you should also set your location details so that you will be listed for swarms in your vicinity.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_recipient',
    'label' => 'Swarm recipient',
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
      'weight' => 19,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter details of your availability to receive swarms.  Only plain text will be displayed, although line breaks will be shown.');
  t('Enter details such as the times you are available to collect, and the areas you will collect from.  People needing a swarm collected will see your name and phone number(s) along with this information. Only plain text will be displayed, although line breaks will be shown.');
  t('Swarm collect details');
  t('Swarm collector');
  t('Swarm receipt details');
  t('Swarm recipient');
  t('Tick the box if you are willing to collect swarms.  Please also fill in the details of your availability in the swarm collection details field.  Please note, that you should also set your location details so that you will be listed for swarms in your vicinity.');
  t('Tick this box if you would like to receive surplus swarms. Please also fill in the details of your availability in the swarm receipt details field. Please note, that you should also set your location details so that you will be listed for swarms in your vicinity.');

  return $field_instances;
}
