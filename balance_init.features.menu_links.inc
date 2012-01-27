<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function balance_init_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-fgtop:<front>
  $menu_links['menu-fgtop:<front>'] = array(
    'menu_name' => 'menu-fgtop',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Balance',
    'options' => array(
      'attributes' => array(
        'target' => '_self',
        'class' => 'balance',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: secondary-links:sitemap
  $menu_links['secondary-links:sitemap'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Balance');
  t('Home');
  t('Sitemap');


  return $menu_links;
}
