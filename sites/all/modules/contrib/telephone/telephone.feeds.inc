<?php

/**
 * @file
 * Provides integration with Feeds module (http://drupal.org/project/feeds).
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 */
function telephone_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {
    $info = field_info_field($name);

    if ($info['type'] == 'telephone') {
      $targets[$name] = array(
        'name' => check_plain($instance['label']),
        'callback' => 'telephone_feeds_set_target',
        'description' => t('The @label field of the node.', array('@label' => $instance['label'])),
      );
    }
  }
}

/**
 * Callback to set target value.
 */
function telephone_feeds_set_target($source, $entity, $target, $values) {
  list($field_name, $column) = explode(':', $target . ':value');

  $field = isset($entity->$field_name) ? $entity->$field_name : array('und' => array());

  // Iterate over all values.
  $delta = 0;
  foreach ($values as $value) {

    if (is_object($value) && $value instanceof FeedsElement) {
      $value = $value->getValue();
    }

    if (is_scalar($value) && strlen($value)) {
      $field['und'][$delta][$column] = (string) $value;
    }

    $delta++;
  }

  $entity->$field_name = $field;
}
