<?php
/**
 * @file
 * ask_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ask_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-first.
  $menus['menu-footer-first'] = array(
    'menu_name' => 'menu-footer-first',
    'title' => 'Footer first',
    'description' => '',
  );
  // Exported menu: menu-footer-second.
  $menus['menu-footer-second'] = array(
    'menu_name' => 'menu-footer-second',
    'title' => 'Footer second',
    'description' => '',
  );
  // Exported menu: menu-footer-third.
  $menus['menu-footer-third'] = array(
    'menu_name' => 'menu-footer-third',
    'title' => 'Footer third',
    'description' => '',
  );
  // Exported menu: menu-social-links.
  $menus['menu-social-links'] = array(
    'menu_name' => 'menu-social-links',
    'title' => 'Social links',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer first');
  t('Footer second');
  t('Footer third');
  t('Main menu');
  t('Social links');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
