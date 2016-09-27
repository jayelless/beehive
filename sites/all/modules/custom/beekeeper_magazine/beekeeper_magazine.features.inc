<?php
/**
 * @file
 * beekeeper_magazine.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function beekeeper_magazine_commerce_product_default_types() {
  $items = array(
    'beekeeper_magazine_subscription' => array(
      'type' => 'beekeeper_magazine_subscription',
      'name' => 'Magazine subscription',
      'description' => 'A magazine/newsletter subscription product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}
