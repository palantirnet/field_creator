<?php
/**
 * @file
 * Provides field bases for fields defined by the Number module.
 */

/**
 * Implements hook_field_creator_base().
 */
function number_field_creator_base() {
  $fields = array();
  // Exported field_base: 'field_int_proto'
  $field_bases['field_int_proto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_int_proto',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $fields;
}