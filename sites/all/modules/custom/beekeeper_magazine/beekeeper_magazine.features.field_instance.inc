<?php
/**
 * @file
 * beekeeper_magazine.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_magazine_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_product-beekeeper_magazine_subscription-commerce_price'.
  $field_instances['commerce_product-beekeeper_magazine_subscription-commerce_price'] = array(
    'bundle' => 'beekeeper_magazine_subscription',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'membership_entity_commerce' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-beekeeper_magazine_subscription-field_beekeeper_magazine_period'.
  $field_instances['commerce_product-beekeeper_magazine_subscription-field_beekeeper_magazine_period'] = array(
    'bundle' => 'beekeeper_magazine_subscription',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The expiry of the subscription period in months. In case multiple subscription products are bought, the subscription period of all bought products is aggregated. In case there is already a valid subscription, its expiry is extended by the given time period.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'line_item' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'membership_entity_commerce' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_beekeeper_magazine_period',
    'label' => 'Subscription period',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'min' => '',
      'prefix' => '',
      'suffix' => ' months',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_beekeeper_magazine_expiry'.
  $field_instances['user-user-field_beekeeper_magazine_expiry'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_beekeeper_magazine_expiry',
    'label' => 'Subscription expiry',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Price');
  t('Subscription expiry');
  t('Subscription period');
  t('The expiry of the subscription period in months. In case multiple subscription products are bought, the subscription period of all bought products is aggregated. In case there is already a valid subscription, its expiry is extended by the given time period.');

  return $field_instances;
}
