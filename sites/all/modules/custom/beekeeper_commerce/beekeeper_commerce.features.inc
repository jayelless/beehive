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
    'training_course' => array(
      'type' => 'training_course',
      'name' => 'Training course',
      'description' => 'This product is a training course that will be delivered over a period of time.',
      'help' => 'Fill in the details like cost and course outline, then complete the dates and places if known.',
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
 * Implements hook_commerce_custom_offline_payments_alter().
 */
function beekeeper_commerce_commerce_custom_offline_payments_alter(&$data) {
  if (isset($data['bank_transfer'])) {
    $data['bank_transfer']['description'] = 'Receive direct money transfers initiated by the customer into your bank account.'; /* WAS: 'Receive direct money transfers initiated by the customer to your bank account.' */
    $data['bank_transfer']['information'] = '<p><strong>Please make payment to:</strong><br />
    Wellington Beekeepers Association Incorporated<br />
    Account number: <strong>03-1534-0009311-000</strong><br />
    <br />
    Payment instructions: Please use your name in the particulars field, and the order number in the reference field</p>
    '; /* WAS: '<p>
            <strong>Please make payment to:</strong><br />
            Account owner: <br />
            Account number: <br />
            IBAN: <br />
            Bank code: <br />
            SWIFT: <br />
            Banking institution: <br />
            Branch office: <br />
            <br />
            Payment instructions: <br />
            </p>' */
  }
  if (isset($data['commerce_cheque'])) {
    $data['commerce_cheque']['format'] = 'filtered_html'; /* WAS: 'plain_text' */
    $data['commerce_cheque']['information'] = '<p>Please make your cheque out to "<strong>Wellington Beekeepers Association Inc.</strong>" and either hand to the treasurer, John Burnet, at a meeting, or post to:</p>
    
    <p><strong>The Treasurer<br />
    Wellington Beekeepers Association<br />
    C/- John Burnet<br />
    21 Kiwi Crescent<br />
    Tawa<br />
    Wellington 5028</strong></p>
    '; /* WAS: 'Pay by cheque instructions.' */
  }
  if (isset($data['in_person'])) {
    $data['in_person']['format'] = 'filtered_html'; /* WAS: 'plain_text' */
    $data['in_person']['information'] = '<p>Pay to the treasurer, <strong>John Burnet</strong>, at a meeting or other beekeeping occasion.</p>
    '; /* WAS: 'Pay in person instructions.' */
  }
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
