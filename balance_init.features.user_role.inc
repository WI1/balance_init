<?php

/**
 * Implementation of hook_user_default_roles().
 */
function balance_init_user_default_roles() {
  $roles = array();

  // Exported role: Site Administrators
  $roles['Site Administrators'] = array(
    'name' => 'Site Administrators',
  );

  return $roles;
}
