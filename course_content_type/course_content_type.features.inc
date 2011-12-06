<?php
/**
 * @file
 * course_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function course_content_type_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Single course listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
