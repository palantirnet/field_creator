<?php
/**
 * @file
 * Provides field bases for fields defined by the Link module.
 */

/**
 * Implements hook_field_creator_base().
 */
function link_field_creator_base() {
  $fields = array();

  // Exported field_base: 'field_links_proto'
  $field_bases['field_links_proto'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_links_proto',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $fields;
}