<?php

/**
 * @file
 * CKEditor hooks implemented by the CKEditor module.
 */

/**
 * Implements hook_ckeditor_plugin().
 */
function ckeditor_ckeditor_plugin() {
  $plugins = array();
  $editor_path = '%editor_path%';
  $plugin_dir = '%plugin_dir%';
  $plugin_dir_additional = '%plugin_dir_extra%';
  $pattern = '#\.addButton\([\s]*[\'"](.*?)[\'"][\s]*\,[\s]*\{[\s]*(.*?)[\s]*\}#s';

  /*
   * CKEditor built-in plugins.
   */
  $_editor_path = ckeditor_path('local');
  if ($_editor_path != '<URL>') {
    if (file_exists($_editor_path . '/plugins/tableresize/plugin.js')) {
      $plugins['tableresize'] = array(
        'name' => 'tableresize',
        'desc' => t('Table Resize plugin'),
        'path' => $editor_path . '/plugins/tableresize/',
        'buttons' => FALSE,
        'default' => 't'
      );
    }

    if (file_exists($_editor_path . '/plugins/autogrow/plugin.js')) {
      $plugins['autogrow'] = array(
        'name' => 'autogrow',
        'desc' => t('Auto Grow plugin'),
        'path' => $editor_path . '/plugins/autogrow/',
        'buttons' => FALSE,
        'default' => 'f'
      );
    }

    if (file_exists($_editor_path . '/plugins/stylesheetparser/plugin.js')) {
      $plugins['stylesheetparser'] = array(
        'name' => 'stylesheetparser',
        'desc' => t('Stylesheet Parser plugin'),
        'path' => $editor_path . '/plugins/stylesheetparser/',
        'buttons' => FALSE,
        'default' => 'f'
      );
    }
  }
  else {
    $_editor_url = ckeditor_path('url');
    if (preg_match("/\/(standard|full)-all/", $_editor_url)) {
      $plugins['tableresize'] = array(
        'name' => 'tableresize',
        'desc' => t('Table Resize plugin. See !link for more details.', array(
          '!link' => l(t('addon page'), 'http://ckeditor.com/addon/tableresize')
        )),
        'path' => $_editor_url . '/plugins/tableresize/',
        'buttons' => FALSE,
        'default' => 't'
      );
      $plugins['autogrow'] = array(
        'name' => 'autogrow',
        'desc' => t('Auto Grow plugin. See !link for more details.', array(
          '!link' => l(t('addon page'), 'http://ckeditor.com/addon/autogrow')
        )),
        'path' => $_editor_url . '/plugins/autogrow/',
        'buttons' => FALSE,
        'default' => 'f'
      );
      $plugins['stylesheetparser'] = array(
        'name' => 'stylesheetparser',
        'desc' => t('Stylesheet Parser plugin. See !link for more details.', array(
          '!link' => l(t('addon page'), 'http://ckeditor.com/addon/stylesheetparser')
        )),
        'path' => $_editor_url . '/plugins/stylesheetparser/',
        'buttons' => FALSE,
        'default' => 'f'
      );
      $plugins['codesnippet'] = array(
        'name' => 'codesnippet',
        'desc' => t('Plugin for inserting Code Snippets. See !link for more details. See !help for additional instructions.', array(
          '!link' => l(t('addon page'), 'http://ckeditor.com/addon/codesnippet'),
          '!help' => l(t('help'), 'admin/help/ckeditor', array('fragment' => 'codesnippet'))
        )),
        'path' => $_editor_url . '/plugins/codesnippet/',
        'buttons' => array(
          'CodeSnippet' => array(
            'icon' => 'icons/codesnippet.png',
            'label' => 'Insert Code Snippet',
          )
        ),
        'default' => 'f'
      );
      $plugins['mathjax'] = array(
        'name' => 'mathjax',
        'desc' => t('Plugin for inserting Mathematical Formula (MathJax). See !link for more details. See !help for additional instructions.', array(
          '!link' => l(t('addon page'), 'http://ckeditor.com/addon/mathjax'),
          '!help' => l(t('help'), 'admin/help/ckeditor', array('fragment' => 'mathjax'))
        )),
        'path' => $_editor_url . '/plugins/mathjax/',
        'buttons' => array(
          'Mathjax' => array(
            'icon' => 'icons/mathjax.png',
            'label' => 'Insert Mathematical Formulas',
          )
        ),
        'default' => 'f'
      );
    }
  }

  /*
   * Plugins located directly in the CKEditor module folder.
   */
  $_plugin_dir = ckeditor_module_path('local') . '/plugins/';
  if ($handle = opendir($_plugin_dir)) {
    while (false !== ($file = readdir($handle))) {
      if (is_dir($_plugin_dir . $file) && file_exists($_plugin_dir . $file . '/plugin.js')) {
        $source = file_get_contents($_plugin_dir . $file . '/plugin.js');
        $buttons = array();
        if (preg_match_all($pattern, $source, $matches)) {
          foreach ($matches[1] as $i => $button_name) {
            if (preg_match('#(icon)[\s]*\:[\s]*([^\,\n]*)#', $matches[2][$i], $matches2)) {
              $buttons[$button_name] = array();
              $buttons[$button_name]['label'] = $button_name;
              $matches2[2] = str_replace(array('this.path', '+', '\'', '"'), array('', '', '', ''), $matches2[2]);
              $buttons[$button_name]['icon'] = trim($matches2[2]);
            }
          }
        }
        if (preg_match('#@file ([^\n\r]*)#', $source, $matches)) {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t($matches[1]),
            'path' => $plugin_dir . $file . '/',
            'buttons' => (count($buttons) > 0) ? $buttons : FALSE,
            'default' => 'f'
          );
        }
        else {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t('Plugin file: ' . $file),
            'path' => $plugin_dir . $file . '/',
            'buttons' => (count($buttons) > 0) ? $buttons : FALSE,
            'default' => 'f'
          );
        }
      }
    }
    closedir($handle);
  }

  /*
   * Plugins located in a folder specified in the CKEditor Global Profile.
   */
  $_plugin_dir_additional = ckeditor_plugins_path('local') . '/';
  if ($_plugin_dir != $_plugin_dir_additional && is_dir($_plugin_dir_additional) && $handle = opendir($_plugin_dir_additional)) {
    while (false !== ($file = readdir($handle))) {
      if (is_dir($_plugin_dir_additional . $file) && file_exists($_plugin_dir_additional . $file . '/plugin.js')) {
        $source = file_get_contents($_plugin_dir_additional . $file . '/plugin.js');
        $buttons = array();
        if (preg_match_all($pattern, $source, $matches)) {
          foreach ($matches[1] as $i => $button_name) {
            if (preg_match('#(icon)[\s]*\:[\s]*([^\,\n]*)#', $matches[2][$i], $matches2)) {
              $buttons[$button_name] = array();
              $buttons[$button_name]['label'] = $button_name;
              $matches2[2] = str_replace(array('this.path', '+', '\'', '"'), array('', '', '', ''), $matches2[2]);
              $buttons[$button_name]['icon'] = trim($matches2[2]);
            }
          }
        }
        if (preg_match('#@file ([^\n\r]*)#', $source, $matches)) {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t($matches[1]),
            'path' => $plugin_dir_additional . $file . '/',
            'buttons' => (count($buttons) > 0) ? $buttons : FALSE,
            'default' => 'f'
          );
        }
        else {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t('Plugin file: ' . $file),
            'path' => $plugin_dir_additional . $file . '/',
            'buttons' => (count($buttons) > 0) ? $buttons : FALSE,
            'default' => 'f'
          );
        }
      }
    }

    closedir($handle);
  }

  // Remove the Media plugin if the Media module isn't installed.
  if (isset($plugins['media']) && module_exists('media') == FALSE) {
    unset($plugins['media']);
  }

  // Remove the IMCE plugin if the IMCE module isn't installed.
  if (isset($plugins['imce']) && module_exists('imce') == FALSE) {
    unset($plugins['imce']);
  }

  // Enable the Drupal Breaks plugin by default if the plugin is available.
  if (isset($plugins['drupalbreaks'])) {
    $plugins['drupalbreaks']['default'] = 't';

    // Remove the page break button if there is no module to handle it.
    if (isset($plugins['drupalbreaks']['buttons']['DrupalPageBreak']) && !module_exists('paging') && !module_exists('pagebreak')) {
      unset($plugins['drupalbreaks']['buttons']['DrupalPageBreak']);
    }
  }

  return $plugins;
}
