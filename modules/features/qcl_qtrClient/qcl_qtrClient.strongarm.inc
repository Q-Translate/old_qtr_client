<?php
/**
 * @file
 * qcl_qtrClient.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function qcl_qtrClient_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'qtrClient_translation_lng';
  $strongarm->value = 'all';
  $export['qtrClient_translation_lng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'qtrClient_topcontrib_period';
  $strongarm->value = 'week';
  $export['qtrClient_topcontrib_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'qtrClient_topcontrib_size';
  $strongarm->value = '5';
  $export['qtrClient_topcontrib_size'] = $strongarm;

  return $export;
}
