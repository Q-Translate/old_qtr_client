<?php
/**
 * @file
 * Installation steps for the profile btrclient.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function btrclient_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'B-Translator';
}

/**
 * Implements hook_install_tasks().
 */
function btrclient_install_tasks($install_state) {
  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'btrclient') . '/btrclient.css');

  module_load_include('inc', 'phpmailer', 'phpmailer.admin');
  module_load_include('inc', 'btrClient', 'btrClient.admin');

  $tasks = array(
    'btrclient_mail_config' => array(
      'display_name' => st('Mail Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'phpmailer_settings_form',
    ),
    'btrclient_config' => array(
      'display_name' => st('B-Translator Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'btrClient_config',
    ),
  );

  return $tasks;
}