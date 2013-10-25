<?php
/**
 * @file
 * prototypical_fields_feature.features.inc
 */

/**
 * Implements hook_field_creator_base().
 */
function addressfield_field_creator_base() {
  $fields = array();
  
  // Exported field_base: 'field_address_proto'
  $fields['field_address_proto'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_proto',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  return $fields;
}
