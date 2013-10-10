<?php

/**
 * @file
 * Drush integration for field creator.
 *
 * @copyright (C) Copyright 2013 Palantir.net, Inc.
 */

/**
 * Implements hook_drush_command().
 *
 * @see drush_parse_command()
 */
function chop_field_creator_drush_command() {
  $items = array();

  $items['chop-field-creator-export-content-types'] = array(
    'description' => "",
    'arguments' => array(
      'base_fields_feature' => 'The machine name of the features module that contains base fields.',
      'desired_module_prefix' => 'The prefix for features modules to be created. If this site is for the Acme Corportation, this argument should likely be "acme_content_type_"',
    ),
    'options' => array(
      'destination' => "Destination path (from Drupal root) of the exported feature. Defaults to 'sites/all/modules/features'",
      'version-set' => "Specify a version number for the feature.",
      'version-increment' => "Increment the feature's version number.",
    ),
    'drupal dependencies' => array('features', 'chop_field_creator'),
    // 'aliases' => array('fe'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function chop_field_creator_drush_help($section) {
  switch ($section) {
    case 'drush:chop-field-creator-export-content-types':
      return dt("Export content type features");
  }
}


/**
 * Exports node types that haven't been exported yet.
 */
function drush_chop_field_creator_export_content_types() {
  if ($args = func_get_args()) {
    list($field_bases_feature, $module_prefix) = $args;
    drush_print(dt('Making modules with the prefix !module_prefix that depend on the feature !fields_bases_feature', array('!module_prefix' => $module_prefix, '!fields_bases_feature' => $field_bases_feature)));
    $node_types = node_type_get_names();
    foreach ($node_types as $type_machine_name => $type_label) {
      // This concatentation should generate a string like
      // 'acme_content_type_person'
      $content_type_feature_module_name = $module_prefix . $type_machine_name;

      // If the node type hasn't been exported already, export it.
      if (!chop_field_creator_has_node_type_been_exported($type_machine_name)) {
        drush_features_export($content_type_feature_module_name, 'node:' . $type_machine_name, 'dependencies:' . $field_bases_feature);
      }
      else {
        drush_print(dt('The node type !type_machine_name had already been exported to a feature.', array('!type_machine_name' => $type_machine_name)));
        // @todo, maybe print a message for node types already exported.
      }
    }
  }
}

/**
 * Checks whether a node type has been exported to a features module or not.
 * 
 * @todo, There might be a function in features that does this same task.
 */
function chop_field_creator_has_node_type_been_exported($node_type) {

  $components = _drush_features_component_list();
  $args_for_filter = array('node');
  $options = array('provided by' => TRUE);
  $filtered_components = _drush_features_component_filter($components, $args_for_filter, $options);
  return array_key_exists('node:' . $node_type, $filtered_components['sources']);
}
