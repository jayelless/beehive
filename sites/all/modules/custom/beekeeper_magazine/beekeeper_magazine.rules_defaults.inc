<?php
/**
 * @file
 * beekeeper_magazine.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_magazine_default_rules_configuration() {
  $items = array();
  $items['rules_beekeeper_magazine_line_item_is_subscription_product'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_line_item_is_subscription_product" : {
      "LABEL" : "Line item is subscription product",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "data_is" : { "data" : [ "line-item:type" ], "value" : "product" } },
        { "data_is" : {
            "data" : [ "line-item:commerce-product:type" ],
            "value" : "beekeeper_magazine_subscription"
          }
        },
        { "data_is" : {
            "data" : [ "line-item:commerce-product:field-beekeeper-magazine-period" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "line-item:commerce-product:field-beekeeper-magazine-period" ],
              "op" : "*",
              "input_2" : [ "line-item:quantity" ]
            },
            "PROVIDE" : { "result" : { "subscription_period" : "Subscription period" } }
          }
        },
        { "component_rules_beekeeper_magazine_subscription_period_to_expiry" : {
            "subscription_period" : [ "subscription_period" ],
            "account" : [ "line-item:order:owner" ]
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_bought'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_bought" : {
      "LABEL" : "Apply bought subscription period",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_beekeeper_magazine_line_item_is_subscription_product" : { "line_item" : [ "list-item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_cancelled'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_cancelled" : {
      "LABEL" : "Subscription cancelled when user account deleted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_delete" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } }
      ],
      "DO" : [
        { "schedule_delete" : {
            "component" : "rules_beekeeper_magazine_subscription_end",
            "task" : "expire-[account:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_end'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_end" : {
      "LABEL" : "Subscription end",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "data_set" : { "data" : [ "user:field-beekeeper-magazine-expiry" ] } }
            ],
            "LABEL" : "Clear account expiry date"
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_expiry_changed'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_expiry_changed" : {
      "LABEL" : "Subscription expiry changed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "account:field-beekeeper-magazine-expiry" ],
            "value" : [ "account-unchanged:field-beekeeper-magazine-expiry" ]
          }
        },
        { "NOT data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } },
        { "NOT data_is_empty" : { "data" : [ "account-unchanged:field-beekeeper-magazine-expiry" ] } }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_beekeeper_magazine_subscription_end",
            "date" : [ "account:field-beekeeper-magazine-expiry" ],
            "identifier" : "expire-[account:uid]",
            "param_user" : [ "account" ]
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_expiry_is_unset'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_expiry_is_unset" : {
      "LABEL" : "Subscription expiry is unset",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "account:field-beekeeper-magazine-expiry" ],
            "value" : [ "account-unchanged:field-beekeeper-magazine-expiry" ]
          }
        },
        { "data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } }
      ],
      "DO" : [
        { "schedule_delete" : {
            "component" : "rules_beekeeper_magazine_subscription_end",
            "task" : "expire-[account:uid]"
          }
        },
        { "component_rules_beekeeper_magazine_subscription_end" : { "user" : [ "account" ] } }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_period_to_expiry'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_period_to_expiry" : {
      "LABEL" : "Apply bought subscription period to user subscription expiry",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "subscription_period" : { "label" : "Subscription period", "type" : "duration" },
        "account" : { "label" : "User account to apply the period", "type" : "user" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "account:field-beekeeper-magazine-expiry" ],
                  "value" : "now"
                }
              }
            ],
            "LABEL" : "User has no subscription yet"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "result" : { "result" : "Calculation result" } },
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "account:field-beekeeper-magazine-expiry" ],
                    "op" : "+",
                    "input_2" : [ "subscription-period" ]
                  },
                  "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                }
              },
              { "data_set" : {
                  "data" : [ "account:field-beekeeper-magazine-expiry" ],
                  "value" : [ "result" ]
                }
              }
            ],
            "LABEL" : "Add the period to the expiry date"
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_start'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_start" : {
      "LABEL" : "Subscription start",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "RULES" : []
    }
  }');
  $items['rules_beekeeper_magazine_subscription_started_insert'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_started_insert" : {
      "LABEL" : "Subscription started (insert)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } }
      ],
      "DO" : [
        { "component_rules_beekeeper_magazine_subscription_start" : { "user" : [ "account" ] } },
        { "schedule" : {
            "component" : "rules_beekeeper_magazine_subscription_end",
            "date" : [ "account:field-beekeeper-magazine-expiry" ],
            "identifier" : "expire-[account:uid]",
            "param_user" : [ "account" ]
          }
        }
      ]
    }
  }');
  $items['rules_beekeeper_magazine_subscription_started_update'] = entity_import('rules_config', '{ "rules_beekeeper_magazine_subscription_started_update" : {
      "LABEL" : "Subscription started (update)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "beekeeper_magazine" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account:field-beekeeper-magazine-expiry" ] } },
        { "data_is_empty" : { "data" : [ "account-unchanged:field-beekeeper-magazine-expiry" ] } }
      ],
      "DO" : [
        { "component_rules_beekeeper_magazine_subscription_start" : { "user" : [ "account" ] } },
        { "schedule" : {
            "component" : "rules_beekeeper_magazine_subscription_end",
            "date" : [ "account:field-beekeeper-magazine-expiry" ],
            "identifier" : "expire-[account:uid]",
            "param_user" : [ "account" ]
          }
        }
      ]
    }
  }');
  return $items;
}
