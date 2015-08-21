<?php
/**
 * @file
 * news_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function news_content_taxonomy_default_vocabularies() {
  return array(
    'news' => array(
      'name' => 'News categories',
      'machine_name' => 'news',
      'description' => 'Types of news (e.g. announcements, press releases, etc.)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Keywords',
      'machine_name' => 'tags',
      'description' => 'Use keywords to group articles on similar topics.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
