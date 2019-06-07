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
      "LABEL" : "Beekeepers: email membership renewal reminder on 1st June",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_renewal_notifications" : [] } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "[site:name] Membership Renewal Due",
            "message" : "Hello Beekeepers!\\r\\n\\r\\nIf you joined the club prior to the 1st January this year, then your membership to [site:name] expired on the 31st May, However, if you joined the club after the 1st January, then your membership is valid until 31st May next year.\\r\\n\\r\\nIf you have not done so already please login here [site:login-url] to check or renew your membership. \\r\\n\\r\\nTo check or renew your membership:\\r\\n1a. Click on the \\u0022Renew membership\\u0022 menu item in the top sub-menu while logged in (if it is not showing, then your membership does not need renewing), or\\r\\n1b. Click in the \\u0022Membership\\u0022 link in the top right of the screen to check your membership status.  If it is shown in green, then your membership is still valid.\\r\\n      Otherwise, select \\u0022Renew\\u0022 tab from the top of the page, or click \\u0022Renew membership\\u0022 from the links underneath your membership details.\\r\\n2. Add a secondary membership to your account if required (allows a second person in your family to be part of your membership)\\r\\n3. Check that the class of membership (standard or junior) is correct.  Junior membership is for young people still at school.\\r\\n4. Click on the \\u0022Add to cart\\u0022 button, and then \\u0022Checkout\\u0022 on the following screen.\\r\\n5. You will be presented with a screen showing the order address. Please check and confirm by clicking the \\u0022Continue to next step\\u0022 button.\\r\\n6. Select your payment method (bank transfer is preferred) and Confirm the order.\\r\\n\\r\\nYou will receive an email confirming your membership renewal once you have successfully completed the process..\\r\\n\\r\\nWe would appreciate your renewing your membership as soon as possible, during the two month grace period.  \\r\\n\\r\\nIf you decide not to renew your membership, then it will lapse after the grace period, although your account on the club website will remain active.  You can renew your membership at any time in the future should you wish to re-join the club.\\r\\n\\r\\nWe look forward to continuing to support you in your beekeeping.\\r\\n\\r\\nThe [site:name] Team."
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
            "value" : "now"
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
  $items['rules_beekeepers_add_to_members_group'] = entity_import('rules_config', '{ "rules_beekeepers_add_to_members_group" : {
      "LABEL" : "Beekeepers: Add to members group",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Beekeepers" ],
      "REQUIRES" : [ "commerce_order", "rules", "og", "commerce_payment" ],
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
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : "1133" },
            "PROVIDE" : { "variable_added" : { "group_members" : "Group: Members" } }
          }
        },
        { "og_subcribe_user" : { "user" : [ "commerce-order:owner" ], "group" : [ "group-members" ] } }
      ]
    }
  }');
  $items['rules_beekeepers_email_membership_lapse_notification_on_1st_augu'] = entity_import('rules_config', '{ "rules_beekeepers_email_membership_lapse_notification_on_1st_augu" : {
      "LABEL" : "Beekeepers: email membership lapse notification on 1st August",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_lapse_notifications" : [] } ],
      "DO" : [
        { "beekeeper_custom_rules_action_send_mail_to_members" : {
            "types" : { "value" : { "3" : "3", "5" : "5" } },
            "status" : { "value" : [ "0" ] },
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "[site:name] Membership has now lapsed",
            "message" : "Hello Beekeepers!\\r\\n\\r\\nYour membership to [site:name] expired on the 31st May and has not been renewed during the two month grace period. If you did not want this to happen, and would now like to renew your membership, \\r\\nplease login here [site:login-url] to renew your membership. \\r\\n\\r\\nTo check or renew you membership:\\r\\n1. Go to your account page (click on your name in the top right of the screen while logged in).\\r\\n2. Scroll to the bottom and check your membership status.  If it is shown in green, then your membership is still valid.\\r\\n3. Otherwise, select \\u0022Renew membership\\u0022 from the links underneath your membership details.\\r\\n4. Add a secondary membership to your account if required (allows a second person in your family to be part of your membership)\\r\\n5. Check that the class of membership (standard or junior) is correct.  Junior membership is for young people still at school.\\r\\n6. Click on the \\u0022Add to cart\\u0022 button, and then \\u0022Checkout\\u0022 on the following screen.\\r\\n7. You will be presented with a screen showing the order address. Please check and confirm by clicking the \\u0022Contine to next step\\u0022 button.\\r\\n8. Select your payment method (bank transfer is preferred) and Confirm the order.\\r\\n\\r\\nYou will receive an email confirming your membership renewal once you have successfully completed the process..\\r\\n\\r\\nWe look forward to continuing to support you in your beekeeping.\\r\\n\\r\\nThe [site:name] Team."
          }
        },
        { "beekeeper_custom_rules_action_remove_roles_from_members" : {
            "types" : { "value" : { "3" : "3", "5" : "5" } },
            "status" : { "value" : [ "0" ] },
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "remove" : { "value" : { "4" : "4", "5" : "5" } }
          }
        }
      ]
    }
  }');
  return $items;
}
