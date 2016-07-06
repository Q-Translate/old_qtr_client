<?php
/**
 * @file
 * qcl_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function qcl_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_api-examples:http://info.qtranslate.org/api-examples-js/.
  $menu_links['main-menu_api-examples:http://info.qtranslate.org/api-examples-js/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://info.qtranslate.org/api-examples-js/',
    'router_path' => '',
    'link_title' => 'API Examples',
    'options' => array(
      'attributes' => array(
        'target' => array(
          0 => '_blank',
        ),
        'title' => '',
      ),
      'identifier' => 'main-menu_api-examples:http://info.qtranslate.org/api-examples-js/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_api-reference:http://info.qtranslate.org/api/.
  $menu_links['main-menu_api-reference:http://info.qtranslate.org/api/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://info.qtranslate.org/api/',
    'router_path' => '',
    'link_title' => 'API Reference',
    'options' => array(
      'attributes' => array(
        'target' => array(
          0 => '_blank',
        ),
        'title' => '',
      ),
      'identifier' => 'main-menu_api-reference:http://info.qtranslate.org/api/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: main-menu_translations:qtr.
  $menu_links['main-menu_translations:qtr'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'qtr',
    'router_path' => 'qtr',
    'link_title' => 'Translations',
    'options' => array(
      'attributes' => array(
        'title' => 'Translations',
      ),
      'identifier' => 'main-menu_translations:qtr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('API Examples');
  t('API Reference');
  t('Contact');
  t('Home');
  t('Translations');

  return $menu_links;
}
