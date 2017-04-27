<?php
/**
 * @file
 * wwm_file_type_displays_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwm_file_type_displays_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
