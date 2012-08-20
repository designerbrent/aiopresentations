<?php
/**
 * @file
 * aiopresentations.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function aiopresentations_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-5',
  'save_lineage'    => 0,
  'enforce_deepest' => 1,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 1,
    'labels' => array(
      0 => 'Event',
      1 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 1,
    'item_types' => array(
      0 => '',
      1 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
    ),
    'allow_new_levels' => 1,
    'max_levels'       => 2,
  ),
);

$configs['taxonomy-5'] = $config;
return $configs;
}
