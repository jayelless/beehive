<?php
/**
 * @file
 * beekeeper_apiaries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_apiaries_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function beekeeper_apiaries_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beekeeper_apiaries_node_info() {
  $items = array(
    'apiary' => array(
      'name' => t('Apiary'),
      'base' => 'node_content',
      'description' => t('An <em>apiary</em> records the location of your beehives and provides an opportunity to keep brief notes'),
      'has_title' => '1',
      'title_label' => t('Apiary name'),
      'help' => t('Provide a name and location for your apiary site.  You can also add any notes about the apiary.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
