<?php
/**
 * @file
 * aiopresentations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aiopresentations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aiopresentations_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function aiopresentations_node_info() {
  $items = array(
    'presentation' => array(
      'name' => t('Presentation'),
      'base' => 'node_content',
      'description' => t('This is for audio/video/pdf presentations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'presentation_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'presentation_speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
