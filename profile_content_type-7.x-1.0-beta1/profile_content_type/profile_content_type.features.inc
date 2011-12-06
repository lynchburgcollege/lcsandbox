<?php
/**
 * @file
 * profile_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function profile_content_type_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('Faculty-staff profile
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
