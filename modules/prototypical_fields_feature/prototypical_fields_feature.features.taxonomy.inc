<?php
/**
 * @file
 * prototypical_fields_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function prototypical_fields_feature_taxonomy_default_vocabularies() {
  return array(
    'testvocab' => array(
      'name' => 'testvocab',
      'machine_name' => 'testvocab',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
