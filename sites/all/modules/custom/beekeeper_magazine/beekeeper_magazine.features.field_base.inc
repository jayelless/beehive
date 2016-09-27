<?php
/**
 * @file
 * beekeeper_magazine.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function beekeeper_magazine_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_beekeeper_magazine_expiry'.
  $field_bases['field_beekeeper_magazine_expiry'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_beekeeper_magazine_expiry',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'field_permissions' => NULL,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'repeat' => 0,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_beekeeper_magazine_period'.
  $field_bases['field_beekeeper_magazine_period'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_beekeeper_magazine_period',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_permissions' => NULL,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
