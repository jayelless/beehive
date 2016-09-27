<?php
/**
 * @file
 * beekeeper_memberships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_memberships_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function beekeeper_memberships_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_membership_entity_type().
 */
function beekeeper_memberships_default_membership_entity_type() {
  $items = array();
  $items['honorary_membership'] = entity_import('membership_entity_type', '{
    "label" : "Honorary Membership",
    "type" : "honorary_membership",
    "description" : "Honorary membership granted by the organisation",
    "weight" : "3",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "2 months",
      "cardinality" : "1",
      "primary_role" : "6",
      "secondary_role" : "6",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  $items['junior_membership'] = entity_import('membership_entity_type', '{
    "label" : "Junior Membership",
    "type" : "junior_membership",
    "description" : "Membership at reduced rate for young beekeepers",
    "weight" : "2",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "2 months",
      "cardinality" : "1",
      "primary_role" : "5",
      "secondary_role" : "5",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  $items['life_membership'] = entity_import('membership_entity_type', '{
    "label" : "Life Membership",
    "type" : "life_membership",
    "description" : "Non-expiring membership awarded to members who have made a significant contribution",
    "weight" : "4",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "none",
      "custom_grace_period" : "none",
      "cardinality" : "1",
      "primary_role" : "7",
      "secondary_role" : "7",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "lifetime" ]
    },
    "rdf_mapping" : []
  }');
  $items['membership'] = entity_import('membership_entity_type', '{
    "label" : "Dummy Membership",
    "type" : "membership",
    "description" : "This is a dummy membership type that must be present to allow memberships to work. Refer http:\\/\\/drupal.org\\/node\\/2400737.",
    "weight" : "0",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "none",
      "custom_grace_period" : "none",
      "cardinality" : "1",
      "primary_role" : "2",
      "secondary_role" : "2",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 day" ]
    },
    "rdf_mapping" : []
  }');
  $items['standard_membership'] = entity_import('membership_entity_type', '{
    "label" : "Standard Membership",
    "type" : "standard_membership",
    "description" : "Standard membership for regular members",
    "weight" : "1",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "2 months",
      "cardinality" : "-1",
      "primary_role" : "4",
      "secondary_role" : "4",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-membership-settings",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
