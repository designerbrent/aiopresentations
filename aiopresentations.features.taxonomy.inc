<?php
/**
 * @file
 * aiopresentations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function aiopresentations_taxonomy_default_vocabularies() {
  return array(
    'organization' => array(
      'name' => 'Organization',
      'machine_name' => 'organization',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'presentation_tracks' => array(
      'name' => 'Presentation Tracks',
      'machine_name' => 'presentation_tracks',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
