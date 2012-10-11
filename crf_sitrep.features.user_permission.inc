<?php
/**
 * @file
 * crf_sitrep.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_sitrep_user_default_permissions() {
  $permissions = array();

  // Exported permission: create hr_sitrep content.
  $permissions['create hr_sitrep content'] = array(
    'name' => 'create hr_sitrep content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hr_sitrep content.
  $permissions['delete any hr_sitrep content'] = array(
    'name' => 'delete any hr_sitrep content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hr_sitrep content.
  $permissions['delete own hr_sitrep content'] = array(
    'name' => 'delete own hr_sitrep content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hr_sitrep content.
  $permissions['edit any hr_sitrep content'] = array(
    'name' => 'edit any hr_sitrep content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hr_sitrep content.
  $permissions['edit own hr_sitrep content'] = array(
    'name' => 'edit own hr_sitrep content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}