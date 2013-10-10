<?php
/**
 * @file
 * chop_prototypical_fields_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function chop_prototypical_fields_feature_taxonomy_default_vocabularies() {
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
