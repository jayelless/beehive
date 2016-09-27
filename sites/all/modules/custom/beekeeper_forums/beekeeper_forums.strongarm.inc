<?php
/**
 * @file
 * beekeeper_forums.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function beekeeper_forums_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_forum';
  $strongarm->value = 0;
  $export['node_view_permissions_forum'] = $strongarm;

  return $export;
}
