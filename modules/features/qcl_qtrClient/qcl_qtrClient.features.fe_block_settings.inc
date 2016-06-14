<?php
/**
 * @file
 * qcl_qtrClient.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function qcl_qtrClient_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['qtrTranslations-latest'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'latest',
    'module' => 'qtrTranslations',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'qtr_client' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'qtr_client',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['qtrTranslations-statistics'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'statistics',
    'module' => 'qtrTranslations',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'qtr_client' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'qtr_client',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['qtrTranslations-topcontrib'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'topcontrib',
    'module' => 'qtrTranslations',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'qtr_client' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'qtr_client',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
