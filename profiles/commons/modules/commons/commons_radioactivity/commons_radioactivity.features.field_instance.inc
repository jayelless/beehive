<?php

/**
 * @file
 * commons_radioactivity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function commons_radioactivity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-document-field_radioactivity'.
  $field_instances['node-document-field_radioactivity'] = array(
    'bundle' => 'document',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 8,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 3,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => 0,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'profile' => 'commons_ra_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-poll-field_radioactivity'.
  $field_instances['node-poll-field_radioactivity'] = array(
    'bundle' => 'poll',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 8,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 3,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => 0,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'profile' => 'commons_ra_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-post-field_radioactivity'.
  $field_instances['node-post-field_radioactivity'] = array(
    'bundle' => 'post',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 8,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 3,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => 0,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'profile' => 'commons_ra_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-question-field_radioactivity'.
  $field_instances['node-question-field_radioactivity'] = array(
    'bundle' => 'question',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 8,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 3,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => 0,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'profile' => 'commons_ra_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-wiki-field_radioactivity'.
  $field_instances['node-wiki-field_radioactivity'] = array(
    'bundle' => 'wiki',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 8,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 3,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => 0,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'profile' => 'commons_ra_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Radioactivity');

  return $field_instances;
}
