<?php
/**
 * @file
 * beekeeper_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function beekeeper_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field-name-first] [user:field-name-last]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
