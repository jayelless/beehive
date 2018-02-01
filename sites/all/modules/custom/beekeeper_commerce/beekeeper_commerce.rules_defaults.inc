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
                "training_course" : "training_course",
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
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : { "information" : {
                    "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003EPlease make payment to:\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWellington Beekeepers Association Incorporated\\u003Cbr \\/\\u003E\\r\\nAccount number:\\u0026nbsp;\\u003Cstrong\\u003E03-1534-0009311-000\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E(Please use your name in the particulars field, and the order number in the reference field).\\u003C\\/p\\u003E\\r\\n",
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
  $items['commerce_payment_commerce_cheque'] = entity_import('rules_config', '{ "commerce_payment_commerce_cheque" : {
      "LABEL" : "Cheque",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_cheque" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "commerce_cheque",
                "settings" : { "information" : {
                    "value" : "Please either hand to the treasurer John Burnet, or post to:\\r\\nThe Treasurer\\r\\nWellington Beekeepers Association\\r\\nC\\/- John Burnet\\r\\n21 Kiwi Crescent\\r\\nTawa\\r\\nWellington 5028",
                    "format" : "plain_text"
                  }
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_in_person'] = entity_import('rules_config', '{ "commerce_payment_in_person" : {
      "LABEL" : "Pay in person",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_in_person" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "in_person",
                "settings" : { "information" : {
                    "value" : "Please hand the payment to the treasurer, John Burnet. This can be at a monthly meeting or any other arranged occasion.",
                    "format" : "plain_text"
                  }
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_limit_nuc_orders_to_one'] = entity_import('rules_config', '{ "rules_limit_nuc_orders_to_one" : {
      "LABEL" : "Limit Nuc orders to one",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Beekeepers" ],
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "commerce_line_item_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-line-item:type" ], "value" : "product" } },
        { "data_is" : {
            "data" : [ "commerce-line-item:commerce-product:type" ],
            "value" : "nucleus_colony"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:quantity" ],
            "op" : "\\u003E",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } },
        { "drupal_message" : { "message" : "You may only order one nuc colony.", "type" : "warning" } }
      ]
    }
  }');
  return $items;
}
