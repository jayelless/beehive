<?php
/**
 * @file
 * beekeeper_apiaries.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function beekeeper_apiaries_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_apiary_location'.
  $field_bases['field_apiary_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apiary_location',
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lng' => array(
        0 => 'lng',
      ),
    ),
    'locked' => 0,
    'module' => 'geolocation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'geolocation_latlng',
  );

  // Exported field_base: 'field_apiary_notes'.
  $field_bases['field_apiary_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apiary_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_apiary_photos'.
  $field_bases['field_apiary_photos'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apiary_photos',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
