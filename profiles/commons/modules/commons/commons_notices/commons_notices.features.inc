<?php

/**
 * @file
 * commons_notices.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_notices_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commons_notices_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function commons_notices_node_info() {
  $items = array(
    'notice' => array(
      'name' => t('Notice'),
      'base' => 'node_content',
      'description' => t('Display an administrative alert for your website users, such as planned system maintenance.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
