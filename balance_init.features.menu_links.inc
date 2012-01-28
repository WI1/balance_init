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
  // Exported menu link: primary-links:faq
  $menu_links['primary-links:faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Hilfe / FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'Hilfe / FAQ',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'node/2',
  );
  // Exported menu link: primary-links:node/2
  $menu_links['primary-links:node/2'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Service',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-service',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: primary-links:node/3
  $menu_links['primary-links:node/3'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Downloads',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/2',
  );
  // Exported menu link: secondary-links:node/105
  $menu_links['secondary-links:node/105'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'AGB',
    'options' => array(
      'attributes' => array(
        'title' => 'Nutzungsbedingungen/AGB',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '47',
  );
  // Exported menu link: secondary-links:node/12
  $menu_links['secondary-links:node/12'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressum',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
  );
  // Exported menu link: secondary-links:node/13
  $menu_links['secondary-links:node/13'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/7',
  );
  // Exported menu link: secondary-links:node/14
  $menu_links['secondary-links:node/14'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Nutzungsbedingungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Nutzungsbedingungen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '13',
  );
  // Exported menu link: secondary-links:node/2
  $menu_links['secondary-links:node/2'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Leistungen',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/7',
  );
  // Exported menu link: secondary-links:node/7
  $menu_links['secondary-links:node/7'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Balance',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-balance',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '7',
  );
  // Exported menu link: secondary-links:node/8
  $menu_links['secondary-links:node/8'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Ziele',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/7',
  );
  // Exported menu link: secondary-links:node/9
  $menu_links['secondary-links:node/9'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Projektträger',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/7',
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
  t('AGB');
  t('Balance');
  t('Downloads');
  t('Hilfe / FAQ');
  t('Home');
  t('Impressum');
  t('Kontakt');
  t('Leistungen');
  t('Nutzungsbedingungen');
  t('Projektträger');
  t('Service');
  t('Sitemap');
  t('Ziele');


  return $menu_links;
}
