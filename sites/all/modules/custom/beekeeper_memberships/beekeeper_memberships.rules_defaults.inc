<?php
/**
 * @file
 * beekeeper_memberships.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_memberships_default_rules_configuration() {
  $items = array();
  $items['beekeeper_membership_email_membership_renewal_reminder'] = entity_import('rules_config', '{ "beekeeper_membership_email_membership_renewal_reminder" : {
      "LABEL" : "Beekeepers: email membership renewal reminder on May 31st",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_renewal_notifications" : [] } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "[site:name] Membership Renewal Due",
            "message" : "Hello Beekeepers!\\r\\n\\r\\nYour membership to [site:name] expires on the 31st May. If you have not done so already please login here [site:login-url] to renew your membership. You have a two month grace period to to renew your membership before it is cancelled.\\r\\n\\r\\nThank you.\\r\\n\\r\\nThe [site:name] Team."
          }
        }
      ]
    }
  }');
  $items['beekeeper_membership_set_expiry_date_of_new_memberships'] = entity_import('rules_config', '{ "beekeeper_membership_set_expiry_date_of_new_memberships" : {
      "LABEL" : "Beekeepers: set expiry date of new memberships",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [ "rules", "commerce", "membership_entity" ],
      "ON" : { "membership_entity_insert" : [] },
      "IF" : [
        { "entity_exists" : {
            "type" : "membership_entity_term",
            "property" : "start",
            "value" : "test"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "membership-entity" ],
            "field" : "membership_entity_term_ref"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Attempt to edit expiry date of membership" } },
        { "entity_query" : {
            "USING" : {
              "type" : "membership_entity_term",
              "property" : "id",
              "value" : [ "membership-entity:mid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "membership-entity:created" ], "value" : "31 March" } }
      ]
    }
  }');
  $items['beekeepers_membership_activate_membership_term'] = entity_import('rules_config', '{ "beekeepers_membership_activate_membership_term" : {
      "LABEL" : "Beekeepers: activate membership when payment complete",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [
        "commerce_order",
        "membership_entity_commerce",
        "rules",
        "commerce_invoice_receipt",
        "commerce_payment"
      ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "membership_entity_product" : "membership_entity_product" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "membership_entity_commerce_activate_term" : { "commerce_order" : [ "commerce_order" ] } },
        { "drupal_message" : { "message" : "Membership activated for [commerce-order:owner] and any other accounts associated this membership order." } },
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "completed" } },
        { "commerce_invoice_receipt_action_mail" : {
            "commerce_order" : [ "commerce_order" ],
            "to" : "[commerce-order:owner] \\u003C[commerce-order:mail]\\u003E",
            "subject" : "[site:name]: Order #[commerce-order:order-id]"
          }
        },
        { "user_unblock" : { "account" : [ "commerce-order:owner" ] } }
      ]
    }
  }');
  $items['rules_beekeepers_email_membership_lapse_notification_on_1st_augu'] = entity_import('rules_config', '{ "rules_beekeepers_email_membership_lapse_notification_on_1st_augu" : {
      "LABEL" : "Beekeepers: email membership lapse notification on 1st August",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_lapse_notifications" : [] } ],
      "DO" : [
        { "beekeeper_custon_rules_action_send_mail_to_members" : {
            "types" : { "value" : { "3" : "3", "5" : "5" } },
            "status" : { "value" : [ "0" ] },
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "[site:name] Membership has now lapsed",
            "message" : "Hello Beekeepers!\\\\r\\\\n\\\\r\\\\nYour membership to [site:name] expired on the 31st May and has not been renewed during the two month grace period. If you did not want this to happen, and would now like to renew your membership, please login here [site:login-url] and follow the renewal process.\\\\r\\\\n\\\\r\\\\nThank you.\\\\r\\\\n\\\\r\\\\nThe [site:name] Team."
          }
        },
        { "beekeeper_custon_rules_action_update_role_of_members" : {
            "types" : { "value" : { "3" : "3", "5" : "5" } },
            "status" : { "value" : [ "0" ] },
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "assign" : { "value" : [] },
            "remove" : { "value" : { "4" : "4", "5" : "5" } }
          }
        }
      ]
    }
  }');
  return $items;
}
