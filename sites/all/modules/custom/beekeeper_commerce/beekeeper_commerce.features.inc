<?php
/**
 * @file
 * beekeeper_commerce.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function beekeeper_commerce_commerce_product_default_types() {
  $items = array(
    'merchandise_baseball_cap' => array(
      'type' => 'merchandise_baseball_cap',
      'name' => 'Merchandise: Baseball cap',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'merchandise_t_shirt' => array(
      'type' => 'merchandise_t_shirt',
      'name' => 'Merchandise: T-shirt',
      'description' => 'Merchandise: club t-shirt',
      'help' => '',
      'revision' => 1,
    ),
    'merchandise_transfer' => array(
      'type' => 'merchandise_transfer',
      'name' => 'Merchandise: Transfer',
      'description' => 'Transfer to go on your bee suit',
      'help' => '',
      'revision' => 1,
    ),
    'nucleus_colony' => array(
      'type' => 'nucleus_colony',
      'name' => 'Nucleus colony',
      'description' => 'Nucleus colony for starting a beehive',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function beekeeper_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beekeeper_commerce_node_info() {
  $items = array(
    'merchandise_display' => array(
      'name' => t('Merchandise display'),
      'base' => 'node_content',
      'description' => t('Content type for displaying merchandise products'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Product display'),
      'base' => 'node_content',
      'description' => t('Display a product from the store'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
