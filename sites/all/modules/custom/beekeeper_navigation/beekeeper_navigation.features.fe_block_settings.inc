<?php
/**
 * @file
 * beekeeper_navigation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function beekeeper_navigation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-beekeeper-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'beekeeper-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commons_beehive' => array(
        'region' => 'lower_header',
        'status' => 1,
        'theme' => 'commons_beehive',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commons_beehive' => array(
        'region' => 'menu_bar',
        'status' => 1,
        'theme' => 'commons_beehive',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commons_beehive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commons_beehive',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commons_beehive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commons_beehive',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
