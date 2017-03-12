<?php
/**
 * @file
 * beekeeper_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function beekeeper_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'calendar_add_colorbox';
  $strongarm->value = '';
  $export['calendar_add_colorbox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'calendar_track_date';
  $strongarm->value = '1';
  $export['calendar_track_date'] = $strongarm;

  return $export;
}
