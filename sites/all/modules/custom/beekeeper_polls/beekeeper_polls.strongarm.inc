<?php
/**
 * @file
 * beekeeper_polls.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function beekeeper_polls_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_poll';
  $strongarm->value = 0;
  $export['node_view_permissions_poll'] = $strongarm;

  return $export;
}
