<?php
/**
 * @file
 * beekeeper_polls.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekeeper_polls_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
