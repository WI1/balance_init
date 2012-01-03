<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function balance_init_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $export['balance'] = $theme;

  // garland
  $theme = array();

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
