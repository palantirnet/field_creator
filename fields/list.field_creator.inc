<?php
/**
 * @file
 * prototypical_fields_feature.features.inc
 */

/**
 * Implements hook_field_creator_base().
 */
function list_field_creator_base() {
  $fields = array();
  
  // Exported field_base: 'field_boolean_proto'
  $fields['field_boolean_proto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_boolean_proto',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $fields;
}

/**
 * Implements hook_field_creator_instance().
 */
function list_field_creator_instance() {
  
  $field_instances = array();
  
  // Exported field_instance: 'node-proto-field_boolean_proto'
  $field_instances['node-proto-field_boolean_proto'] = array(
    'bundle' => 'proto',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_boolean_proto',
    'label' => 'Prototypical Boolean',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 44,
    ),
  );
  
  return $field_instances;
}
