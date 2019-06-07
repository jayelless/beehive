<?php

/**
 * @file
 * beekeeper_users.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_users_default_rules_configuration() {
  $items = array();
  $items['rules_add_to_public_group_when_account_created'] = entity_import('rules_config', '{ "rules_add_to_public_group_when_account_created" : {
      "LABEL" : "Add to Public group when account created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Beekeepers" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : "131" },
            "PROVIDE" : { "variable_added" : { "group_public" : "Group: Public" } }
          }
        },
        { "og_subcribe_user" : { "user" : [ "account" ], "group" : [ "group-public" ] } }
      ]
    }
  }');
  return $items;
}
