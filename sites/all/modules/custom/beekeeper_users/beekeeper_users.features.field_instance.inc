<?php
/**
 * @file
 * beekeeper_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_location_privacy'.
  $field_instances['user-user-field_location_privacy'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Checking this box will mean that your address details are made available to other members, and additionally, you will be able to see other members details.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_location_privacy',
    'label' => 'Location Privacy',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_phone_number'.
  $field_instances['user-user-field_phone_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more contact phone numbers.  Use the "Add another item" button for second and subsequent numbers.  It is recommended that each number is prefixed with a brief description like "Home: "',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_phone_number',
    'label' => 'Telephone',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_postal_address'.
  $field_instances['user-user-field_postal_address'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your home or postal address here.  The first address field should be used for the street name and number unless you need to specify a flat or apartment. Please also specify your suburb if possible.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_postal_address',
    'label' => 'Postal address',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'NZ' => 'NZ',
        ),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_user_location'.
  $field_instances['user-user-field_user_location'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'address' => array(
          'field' => 'Ngauranga Gorge Rd, Ngauranga, Wellington 6035, New Zealand',
        ),
        'lat' => -41.2445524,
        'lng' => '174.81410589999996',
        'field_type' => 'geolocation_latlng',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'geolocation_googlemaps',
        'settings' => array(
          'map_height' => '300px',
          'map_imageformat' => 'png8',
          'map_link' => 0,
          'map_maptype' => 'roadmap',
          'map_width' => '300px',
          'map_zoomlevel' => 12,
          'marker_icon' => '',
        ),
        'type' => 'geolocation_googlemaps_static',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_location',
    'label' => 'My Location',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geolocation_googlemaps',
      'settings' => array(
        'marker_draggable' => 0,
        'scrollwheel' => 0,
      ),
      'type' => 'geolocation_googlemap',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Checking this box will mean that your address details are made available to other members, and additionally, you will be able to see other members details.');
  t('Enter one or more contact phone numbers.  Use the "Add another item" button for second and subsequent numbers.  It is recommended that each number is prefixed with a brief description like "Home: "');
  t('Enter your home or postal address here.  The first address field should be used for the street name and number unless you need to specify a flat or apartment. Please also specify your suburb if possible.');
  t('Location Privacy');
  t('My Location');
  t('Postal address');
  t('Telephone');

  return $field_instances;
}
