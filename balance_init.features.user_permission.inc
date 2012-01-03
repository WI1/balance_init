<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function balance_init_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: access feedback form
  $permissions['access feedback form'] = array(
    'name' => 'access feedback form',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access site map
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access statistics
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: access tinymce imagemanager
  $permissions['access tinymce imagemanager'] = array(
    'name' => 'access tinymce imagemanager',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer imports
  $permissions['administer imports'] = array(
    'name' => 'administer imports',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer languages
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer ldap modules
  $permissions['administer ldap modules'] = array(
    'name' => 'administer ldap modules',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer piwik
  $permissions['administer piwik'] = array(
    'name' => 'administer piwik',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Site Administrators',
    ),
  );

  // Exported permission: administer unfuddle api configuration
  $permissions['administer unfuddle api configuration'] = array(
    'name' => 'administer unfuddle api configuration',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer varnish
  $permissions['administer varnish'] = array(
    'name' => 'administer varnish',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: create images
  $permissions['create images'] = array(
    'name' => 'create images',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: delete any images
  $permissions['delete any images'] = array(
    'name' => 'delete any images',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: delete own images
  $permissions['delete own images'] = array(
    'name' => 'delete own images',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: edit any images
  $permissions['edit any images'] = array(
    'name' => 'edit any images',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: edit own images
  $permissions['edit own images'] = array(
    'name' => 'edit own images',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: execute unlink files
  $permissions['execute unlink files'] = array(
    'name' => 'execute unlink files',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: export bulk nodes
  $permissions['export bulk nodes'] = array(
    'name' => 'export bulk nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: export node
  $permissions['export node'] = array(
    'name' => 'export node',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: export own nodes
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: grant content access
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: grant own content access
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: import content
  $permissions['import content'] = array(
    'name' => 'import content',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: opt-in or out of tracking
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'Documentation User',
      '1' => 'Project Administrators',
      '2' => 'Project Members',
      '3' => 'Site Administrators',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use PHP for tracking visibility
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use PHP to import nodes
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view feedback messages
  $permissions['view feedback messages'] = array(
    'name' => 'view feedback messages',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view imagecache 
  $permissions['view imagecache '] = array(
    'name' => 'view imagecache ',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view imagecache frontvisual-10c-gr
  $permissions['view imagecache frontvisual-10c-gr'] = array(
    'name' => 'view imagecache frontvisual-10c-gr',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache logo-small
  $permissions['view imagecache logo-small'] = array(
    'name' => 'view imagecache logo-small',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache pagevisual-7c-gr
  $permissions['view imagecache pagevisual-7c-gr'] = array(
    'name' => 'view imagecache pagevisual-7c-gr',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache pic-1c-square
  $permissions['view imagecache pic-1c-square'] = array(
    'name' => 'view imagecache pic-1c-square',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache pic_2c_square
  $permissions['view imagecache pic_2c_square'] = array(
    'name' => 'view imagecache pic_2c_square',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache projectlogo_1-2c
  $permissions['view imagecache projectlogo_1-2c'] = array(
    'name' => 'view imagecache projectlogo_1-2c',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache projectlogo_1-3c
  $permissions['view imagecache projectlogo_1-3c'] = array(
    'name' => 'view imagecache projectlogo_1-3c',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache projectlogo_9c
  $permissions['view imagecache projectlogo_9c'] = array(
    'name' => 'view imagecache projectlogo_9c',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache reg
  $permissions['view imagecache reg'] = array(
    'name' => 'view imagecache reg',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache short
  $permissions['view imagecache short'] = array(
    'name' => 'view imagecache short',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache thumb
  $permissions['view imagecache thumb'] = array(
    'name' => 'view imagecache thumb',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache tiny
  $permissions['view imagecache tiny'] = array(
    'name' => 'view imagecache tiny',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache userpic-1c-square
  $permissions['view imagecache userpic-1c-square'] = array(
    'name' => 'view imagecache userpic-1c-square',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache userpic_2c_portrait
  $permissions['view imagecache userpic_2c_portrait'] = array(
    'name' => 'view imagecache userpic_2c_portrait',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view original images
  $permissions['view original images'] = array(
    'name' => 'view original images',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'Documentation User',
      '1' => 'Project Administrators',
      '2' => 'Project Members',
      '3' => 'Site Administrators',
      '4' => 'authenticated user',
    ),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
    ),
  );

  return $permissions;
}
