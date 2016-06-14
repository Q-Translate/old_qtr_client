<?php
/**
 * @file
 * qcl_qtrClient.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function qcl_qtrClient_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
