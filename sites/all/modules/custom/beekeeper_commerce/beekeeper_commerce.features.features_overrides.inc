<?php
/**
 * @file
 * beekeeper_commerce.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function beekeeper_commerce_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: commerce_custom_offline_payment
  $overrides["commerce_custom_offline_payment.bank_transfer.description"] = 'Receive direct money transfers initiated by the customer into your bank account.';
  $overrides["commerce_custom_offline_payment.bank_transfer.information"] = '<p><strong>Please make payment to:</strong><br />
  Wellington Beekeepers Association Incorporated<br />
  Account number: <strong>03-1534-0009311-000</strong><br />
  <br />
  Payment instructions: Please use your name in the particulars field, and the order number in the reference field</p>
  ';
  $overrides["commerce_custom_offline_payment.commerce_cheque.format"] = 'filtered_html';
  $overrides["commerce_custom_offline_payment.commerce_cheque.information"] = '<p>Please make your cheque out to "<strong>Wellington Beekeepers Association Inc.</strong>" and either hand to the treasurer, John Burnet, at a meeting, or post to:</p>
  
  <p><strong>The Treasurer<br />
  Wellington Beekeepers Association<br />
  C/- John Burnet<br />
  21 Kiwi Crescent<br />
  Tawa<br />
  Wellington 5028</strong></p>
  ';
  $overrides["commerce_custom_offline_payment.in_person.format"] = 'filtered_html';
  $overrides["commerce_custom_offline_payment.in_person.information"] = '<p>Pay to the treasurer, <strong>John Burnet</strong>, at a meeting or other beekeeping occasion.</p>
  ';

 return $overrides;
}
