<?php

/**
 * @file
 * Builds the ctools export UI page for configuring embed buttons.
 */

/**
 * Define this Export UI plugin.
 */
$plugin = array(
  'schema' => 'entity_embed',

  'access' => 'administer embed buttons',

  'menu' => array(
    'menu prefix' => 'admin/config/content',
    'menu item' => 'embed-button',
    'menu title' => 'Entity embed',
    'menu description' => 'Administer entity embed buttons.',
  ),

  'title singular' => t('button configuration'),
  'title plural' => t('button configurations'),
  'title singular proper' => t('Button configuration'),
  'title plural proper' => t('Button configurations'),

  'form' => array(
    'settings' => 'entity_embed_ctools_export_ui_form',
  ),
);

/**
 * Define the preset add/edit form.
 */
function entity_embed_ctools_export_ui_form(&$form, &$form_state) {
  $preset = $form_state['item'];

  $form['button_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Button label'),
    '#default_value' => $preset->button_label,
    '#maxlength' => 64,
    '#description' => t('The label used by CKEditor to identify the button.'),
    '#required' => TRUE,
  );

  $options = array();
  $entity_types = entity_get_info();

  foreach ($entity_types as $entity_type => $info) {
    $options[$entity_type] = $info['label'];
  }

  $form['entity_type'] = array(
    '#type' => 'select',
    '#title' => t('Entity type'),
    '#default_value' => $preset->entity_type,
    '#options' => $options,
    '#description' => t('The type of entity allowed to be embedded using the button.'),
    '#required' => TRUE,
  );

  $form['button_icon_fid'] = array(
    '#type' => 'managed_file',
    '#title' => t('Button icon'),
    '#default_value' => $preset->button_icon_fid,
    '#description' => t('The icon to be used for the button in the CKEditor toolbar. The default Entity icon will be displayed if a custom icon is not available.'),
    '#upload_location' => file_default_scheme() . '://entity_embed/',
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
      'file_validate_image_resolution' => array('16x16'),
    ),
  );
}
