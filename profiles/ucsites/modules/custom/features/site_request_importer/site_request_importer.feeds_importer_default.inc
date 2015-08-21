<?php
/**
 * @file
 * site_request_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function site_request_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'site_importer';
  $feeds_importer->config = array(
    'name' => 'Site importer',
    'description' => 'Import updates to list of site requests',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'sites directory',
            'target' => 'field_short_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'preferred url',
            'target' => 'field_status_preferred_vhost',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'aliases',
            'target' => 'field_status_aliases',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'owner',
            'target' => 'field_cnet',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'status',
            'target' => 'field_status_launch',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'reserved?',
            'target' => 'field_status_url_reserved',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'create date',
            'target' => 'field_status_create_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'site name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'comments',
            'target' => 'field_status_notes',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'node',
            'target' => 'nid',
            'unique' => 1,
          ),
          10 => array(
            'source' => 'installed',
            'target' => 'field_install_complete',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ucsiterequestform',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['site_importer'] = $feeds_importer;

  return $export;
}
