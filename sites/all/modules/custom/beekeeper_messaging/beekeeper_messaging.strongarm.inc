<?php
/**
 * @file
 * beekeeper_messaging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function beekeeper_messaging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_mass_contact';
  $strongarm->value = 1;
  $export['node_view_permissions_mass_contact'] = $strongarm;

  return $export;
}
