<?php
/**
 * @file
 * directory_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function directory_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_directory_listing_pattern';
  $strongarm->value = 'directory/[node:title]';
  $export['pathauto_node_directory_listing_pattern'] = $strongarm;

  return $export;
}
