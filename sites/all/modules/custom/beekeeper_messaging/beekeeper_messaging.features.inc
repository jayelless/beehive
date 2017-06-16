<?php
/**
 * @file
 * beekeeper_messaging.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_messaging_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
