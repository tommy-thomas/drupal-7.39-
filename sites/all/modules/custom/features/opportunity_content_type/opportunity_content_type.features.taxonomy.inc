<?php
/**
 * @file
 * opportunity_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opportunity_content_type_taxonomy_default_vocabularies() {
  return array(
    'opportunity_levels' => array(
      'name' => 'Opportunity levels',
      'machine_name' => 'opportunity_levels',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'opportunity_tags' => array(
      'name' => 'Opportunity tags',
      'machine_name' => 'opportunity_tags',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'opportunity_types' => array(
      'name' => 'Opportunity types',
      'machine_name' => 'opportunity_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
