<?php
/**
 * @file
 * chop_prototypical_fields_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function chop_prototypical_fields_feature_node_info() {
  $items = array(
    'proto' => array(
      'name' => t('Prototypical Content Type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
