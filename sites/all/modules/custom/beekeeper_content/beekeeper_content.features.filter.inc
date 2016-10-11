<?php
/**
 * @file
 * beekeeper_content.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function beekeeper_content_filter_default_formats() {
  $formats = array();

  // Exported format: Advanced HTML.
  $formats['advanced_html'] = array(
    'format' => 'advanced_html',
    'name' => 'Advanced HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:7:{i:0;a:2:{s:4:"name";s:6:"styles";s:5:"items";a:2:{i:0;s:6:"Format";i:1;s:6:"Styles";}}i:1;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:4:{i:0;s:4:"Bold";i:1;s:6:"Italic";i:2;s:9:"Underline";i:3;s:6:"Strike";}}i:2;a:2:{s:4:"name";s:9:"alignment";s:5:"items";a:4:{i:0;s:12:"JustifyRight";i:1;s:13:"JustifyCenter";i:2;s:11:"JustifyLeft";i:3;s:12:"JustifyBlock";}}i:3;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:10:"DrupalLink";i:1;s:12:"DrupalUnlink";}}i:4;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:5;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:2:{i:0;s:10:"Blockquote";i:1;s:6:"Source";}}i:6;a:2:{s:4:"name";s:8:"Language";s:5:"items";a:3:{i:0;s:14:"HorizontalRule";i:1;s:5:"Table";i:2;s:11:"DrupalImage";}}}}s:12:"image_upload";a:5:{s:6:"status";i:1;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:2:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}s:8:"language";a:1:{s:13:"language_list";s:2:"un";}}}',
    'filters' => array(
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'editor' => '',
    'editor_settings' => 'a:0:{}',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
