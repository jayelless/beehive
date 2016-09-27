<?php
/**
 * @file
 * beekeeper_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function beekeeper_content_image_default_styles() {
  $styles = array();

  // Exported image style: extra_large.
  $styles['extra_large'] = array(
    'label' => 'Extra large (1280x1280)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => 1280,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: larger.
  $styles['larger'] = array(
    'label' => 'Larger (1024x1024)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1024,
          'height' => 1024,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function beekeeper_content_node_info() {
  $items = array(
    'newsletter' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('Club newsletter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
