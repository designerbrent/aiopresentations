<?php
/**
 * @file
 * aiopresentations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function aiopresentations_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer media.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: create presentation content.
  $permissions['create presentation content'] = array(
    'name' => 'create presentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create presentation_event content.
  $permissions['create presentation_event content'] = array(
    'name' => 'create presentation_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create presentation_speaker content.
  $permissions['create presentation_speaker content'] = array(
    'name' => 'create presentation_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any presentation content.
  $permissions['delete any presentation content'] = array(
    'name' => 'delete any presentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any presentation_event content.
  $permissions['delete any presentation_event content'] = array(
    'name' => 'delete any presentation_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any presentation_speaker content.
  $permissions['delete any presentation_speaker content'] = array(
    'name' => 'delete any presentation_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own presentation content.
  $permissions['delete own presentation content'] = array(
    'name' => 'delete own presentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own presentation_event content.
  $permissions['delete own presentation_event content'] = array(
    'name' => 'delete own presentation_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own presentation_speaker content.
  $permissions['delete own presentation_speaker content'] = array(
    'name' => 'delete own presentation_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any presentation content.
  $permissions['edit any presentation content'] = array(
    'name' => 'edit any presentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any presentation_event content.
  $permissions['edit any presentation_event content'] = array(
    'name' => 'edit any presentation_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any presentation_speaker content.
  $permissions['edit any presentation_speaker content'] = array(
    'name' => 'edit any presentation_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: edit own presentation content.
  $permissions['edit own presentation content'] = array(
    'name' => 'edit own presentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own presentation_event content.
  $permissions['edit own presentation_event content'] = array(
    'name' => 'edit own presentation_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own presentation_speaker content.
  $permissions['edit own presentation_speaker content'] = array(
    'name' => 'edit own presentation_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'media',
  );

  return $permissions;
}
