<?php
/**
 * @file
 * basic_page_with_multiple_columns.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function basic_page_with_multiple_columns_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_multi_column_basic_page';
  $strongarm->value = 0;
  $export['comment_anonymous_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_multi_column_basic_page';
  $strongarm->value = 1;
  $export['comment_default_mode_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_multi_column_basic_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_multi_column_basic_page';
  $strongarm->value = 1;
  $export['comment_form_location_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_multi_column_basic_page';
  $strongarm->value = '1';
  $export['comment_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_multi_column_basic_page';
  $strongarm->value = '1';
  $export['comment_preview_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_multi_column_basic_page';
  $strongarm->value = 1;
  $export['comment_subject_field_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_multi_column_basic_page';
  $strongarm->value = array();
  $export['node_options_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_multi_column_basic_page';
  $strongarm->value = '0';
  $export['node_preview_multi_column_basic_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_multi_column_basic_page';
  $strongarm->value = 0;
  $export['node_submitted_multi_column_basic_page'] = $strongarm;

  return $export;
}
