<?php
/**
 * @file
 * ucsiterequestform.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ucsiterequestform_taxonomy_default_vocabularies() {
  return array(
    'client_groups' => array(
      'name' => 'Client groups',
      'machine_name' => 'client_groups',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
