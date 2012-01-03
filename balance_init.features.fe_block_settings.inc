<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function balance_init_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

<<<<<<< HEAD
  $theme['masquerade-0'] = array(
    'module' => 'masquerade',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-79',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => 'node/add/dokuwiki
veranstaltungen/balance-jahreskonferenz/zeitplan
veranstaltungen/balance-jahreskonferenz/zeitplan/*',
    'title' => '',
    'cache' => '2',
  );

  $theme['menu-menu-fgtop'] = array(
    'module' => 'menu',
    'delta' => 'menu-fgtop',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'balance_bar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

=======
>>>>>>> ae7a6d96c0e65f989e56d829a763115770ea6c4a
  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
<<<<<<< HEAD
    'weight' => '-88',
=======
    'weight' => '0',
>>>>>>> ae7a6d96c0e65f989e56d829a763115770ea6c4a
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

<<<<<<< HEAD
  $theme['site_map-0'] = array(
    'module' => 'site_map',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '7',
=======
  $export['balance'] = $theme;

  // garland
  $theme = array();

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
>>>>>>> ae7a6d96c0e65f989e56d829a763115770ea6c4a
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
<<<<<<< HEAD
    'cache' => '1',
  );

  $export['balance'] = $theme;
=======
    'cache' => '-1',
  );

  $export['garland'] = $theme;
>>>>>>> ae7a6d96c0e65f989e56d829a763115770ea6c4a

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
