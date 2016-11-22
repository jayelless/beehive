<?php
/**
 * @file
 * beekeeper_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_commerce_default_rules_configuration() {
  $items = array();
  $items['beekeeper_commerce_advise_when_payment_complete'] = entity_import('rules_config', '{ "beekeeper_commerce_advise_when_payment_complete" : {
      "LABEL" : "Beekeepers: advise when payment complete",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [
        "commerce_order",
        "rules",
        "commerce_invoice_receipt",
        "commerce_payment"
      ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : {
                "beekeeper_magazine_subscription" : "beekeeper_magazine_subscription",
                "nucleus_colony" : "nucleus_colony",
                "product" : "product",
                "membership_entity_product" : "membership_entity_product"
              }
            },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Order complete for [commerce-order:order-number] as [commerce-order:owner] has paid in full." } },
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "completed" } },
        { "commerce_invoice_receipt_action_mail" : {
            "commerce_order" : [ "commerce_order" ],
            "to" : "[commerce-order:owner] \\u003C[commerce-order:mail]\\u003E",
            "subject" : "[site:name]: Order #[commerce-order:order-id]"
          }
        }
      ]
    }
  }');
  $items['beekeeper_commerce_bank_transfer'] = entity_import('rules_config', '{ "beekeeper_commerce_bank_transfer" : {
      "LABEL" : "Bank Transfer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : { "information" : {
                    "value" : "\\u003Cp\\u003E\\r\\n\\u003Cstrong\\u003EPlease make payment to:\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\nWellington Beekeepers Association Incorporated \\u003Cbr \\/\\u003E\\r\\nAccount number: \\u003Cstrong\\u003E03-1534-0009311-000\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nPayment instructions: Please use your name in the particulars field, and the order number in the reference field\\u003Cbr \\/\\u003E\\r\\n\\u003C\\/p\\u003E",
                    "format" : "filtered_html"
                  }
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_bank_transfer'] = entity_import('rules_config', '{ "commerce_payment_bank_transfer" : {
      "LABEL" : "Bank Transfer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "bank_transfer"
          }
        }
      ]
    }
  }');
  return $items;
}
