<?php
/**
 * @file
 * qcl_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function qcl_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'headerbox';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Displays the title and slogan at the top of the front page.';
  $box->options = array(
    'body' => array(
      'value' => '<h1>Quran Translations</h1>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['headerbox'] = $box;

  return $export;
}
