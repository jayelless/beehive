<?php
/**
 * @file
 * beekeeper_users.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function beekeeper_users_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_current_members';
  $feeds_importer->config = array(
    'name' => 'Import current members',
    'description' => 'Import current members giving them a role of "standard member"',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          8 => '8',
          3 => 0,
          5 => 0,
          4 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'login',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'e-mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'first_name',
            'target' => 'field_name_first',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'surname',
            'target' => 'field_name_last',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'phone',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'first_name',
            'target' => 'field_postal_address:first_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'surname',
            'target' => 'field_postal_address:last_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'address_line1',
            'target' => 'field_postal_address:thoroughfare',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_line2',
            'target' => 'field_postal_address:premise',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'suburb',
            'target' => 'field_postal_address:dependent_locality',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'town_city',
            'target' => 'field_postal_address:locality',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'postcode',
            'target' => 'field_postal_address:postal_code',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'country',
            'target' => 'field_postal_address:country',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'lattitude',
            'target' => 'field_user_location:lat',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'longitude',
            'target' => 'field_user_location:lng',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_current_members'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_expired_members';
  $feeds_importer->config = array(
    'name' => 'Import expired members',
    'description' => 'Import recently expired members, without giving them a membership role',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          8 => 0,
          5 => 0,
          4 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'login',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'e-mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'first_name',
            'target' => 'field_name_first',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'surname',
            'target' => 'field_name_last',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'phone',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'first_name',
            'target' => 'field_postal_address:first_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'surname',
            'target' => 'field_postal_address:last_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'address_line1',
            'target' => 'field_postal_address:thoroughfare',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_line2',
            'target' => 'field_postal_address:premise',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'suburb',
            'target' => 'field_postal_address:dependent_locality',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'town_city',
            'target' => 'field_postal_address:locality',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'postcode',
            'target' => 'field_postal_address:postal_code',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'country',
            'target' => 'field_postal_address:country',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'lattitude',
            'target' => 'field_user_location:lat',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'longitude',
            'target' => 'field_user_location:lng',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_expired_members'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_honorary_members';
  $feeds_importer->config = array(
    'name' => 'Import honorary members',
    'description' => 'Inport courtesy and honorary members, giving then a role of "honorary member"',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          4 => '4',
          3 => 0,
          8 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'login',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'e-mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'first_name',
            'target' => 'field_name_first',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'surname',
            'target' => 'field_name_last',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'phone',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'first_name',
            'target' => 'field_postal_address:first_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'surname',
            'target' => 'field_postal_address:last_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'address_line1',
            'target' => 'field_postal_address:thoroughfare',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_line2',
            'target' => 'field_postal_address:premise',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'suburb',
            'target' => 'field_postal_address:dependent_locality',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'town_city',
            'target' => 'field_postal_address:locality',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'postcode',
            'target' => 'field_postal_address:postal_code',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'country',
            'target' => 'field_postal_address:country',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'lattitude',
            'target' => 'field_user_location:lat',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'longitude',
            'target' => 'field_user_location:lng',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_honorary_members'] = $feeds_importer;

  return $export;
}
