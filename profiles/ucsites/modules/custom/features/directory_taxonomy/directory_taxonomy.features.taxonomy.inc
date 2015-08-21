<?php
/**
 * @file
 * directory_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function directory_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'directories' => array(
      'name' => 'Directories',
      'machine_name' => 'directories',
      'description' => 'Create multiple directories to display staff, faculty, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
