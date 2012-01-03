<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function balance_init_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-fgtop
  $menus['menu-fgtop'] = array(
    'menu_name' => 'menu-fgtop',
    'title' => 'Fokusgruppen',
    'description' => '',
  );
  // Exported menu: menu-group-menu
  $menus['menu-group-menu'] = array(
    'menu_name' => 'menu-group-menu',
    'title' => 'Group Menu',
    'description' => 'Menu for the tabs on organic group homepages. To navigate in the organic groups content',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Hauptnavigation (oben)',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Fokusgruppen');
  t('Group Menu');
  t('Hauptnavigation (oben)');
  t('Menu for the tabs on organic group homepages. To navigate in the organic groups content');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');


  return $menus;
}
