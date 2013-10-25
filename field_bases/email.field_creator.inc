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