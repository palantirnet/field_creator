<?php
/**
 * @file
 * Provides field bases for fields defined by the Email module.
 */

/**
 * Implements hook_field_creator_base().
 */
function email_field_creator_base() {
  $fields = array();

  // Exported field_base: 'field_email_proto'
  $fields['field_email_proto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_proto',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  return $fields;
}

/**
 * Implements hook_field_creator_instance().
 */
function email_field_creator_instance() {
  
  $field_instances = array();
  
  // Exported field_instance: 'node-proto-field_email_proto'
  $field_instances['node-proto-field_email_proto'] = array(
    'bundle' => 'proto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_proto',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );
  
  return $field_instances;
}