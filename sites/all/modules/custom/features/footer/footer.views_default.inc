<?php
/**
 * @file
 * footer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function footer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'footer';
  $view->description = 'This view creates four blocks for each of the four columns in the footer';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Footer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '604800';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '604800';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Facebook link */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  /* Field: Content: Twitter link */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: YouTube link */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'url';
  /* Field: Content: Flickr link */
  $handler->display->display_options['fields']['field_flickr']['id'] = 'field_flickr';
  $handler->display->display_options['fields']['field_flickr']['table'] = 'field_data_field_flickr';
  $handler->display->display_options['fields']['field_flickr']['field'] = 'field_flickr';
  $handler->display->display_options['fields']['field_flickr']['label'] = '';
  $handler->display->display_options['fields']['field_flickr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flickr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_flickr']['click_sort_column'] = 'url';
  /* Field: Content: Vimeo link */
  $handler->display->display_options['fields']['field_vimeo']['id'] = 'field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['table'] = 'field_data_field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['field'] = 'field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_vimeo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_vimeo']['type'] = 'default';
  /* Field: Content: Tumblr link */
  $handler->display->display_options['fields']['field_tumblr']['id'] = 'field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['table'] = 'field_data_field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['field'] = 'field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['label'] = '';
  $handler->display->display_options['fields']['field_tumblr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tumblr']['click_sort_column'] = 'url';
  /* Field: Content: LinkedIn link */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: iTunes link */
  $handler->display->display_options['fields']['field_itunes']['id'] = 'field_itunes';
  $handler->display->display_options['fields']['field_itunes']['table'] = 'field_data_field_itunes';
  $handler->display->display_options['fields']['field_itunes']['field'] = 'field_itunes';
  $handler->display->display_options['fields']['field_itunes']['label'] = '';
  $handler->display->display_options['fields']['field_itunes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes']['click_sort_column'] = 'url';
  /* Field: Content: RSS link */
  $handler->display->display_options['fields']['field_rss']['id'] = 'field_rss';
  $handler->display->display_options['fields']['field_rss']['table'] = 'field_data_field_rss';
  $handler->display->display_options['fields']['field_rss']['field'] = 'field_rss';
  $handler->display->display_options['fields']['field_rss']['label'] = '';
  $handler->display->display_options['fields']['field_rss']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rss']['click_sort_column'] = 'url';
  /* Field: Content: Blogger link */
  $handler->display->display_options['fields']['field_blogger']['id'] = 'field_blogger';
  $handler->display->display_options['fields']['field_blogger']['table'] = 'field_data_field_blogger';
  $handler->display->display_options['fields']['field_blogger']['field'] = 'field_blogger';
  $handler->display->display_options['fields']['field_blogger']['label'] = '';
  $handler->display->display_options['fields']['field_blogger']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogger']['click_sort_column'] = 'url';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'footer' => 'footer',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Social media links */
  $handler = $view->new_display('block', 'Social media links', 'socialmedia');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Facebook link */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'url';
  /* Field: Content: Twitter link */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'url';
  /* Field: Content: YouTube link */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['click_sort_column'] = 'url';
  /* Field: Content: Flickr link */
  $handler->display->display_options['fields']['field_flickr']['id'] = 'field_flickr';
  $handler->display->display_options['fields']['field_flickr']['table'] = 'field_data_field_flickr';
  $handler->display->display_options['fields']['field_flickr']['field'] = 'field_flickr';
  $handler->display->display_options['fields']['field_flickr']['label'] = '';
  $handler->display->display_options['fields']['field_flickr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flickr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_flickr']['click_sort_column'] = 'url';
  /* Field: Content: Vimeo link */
  $handler->display->display_options['fields']['field_vimeo']['id'] = 'field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['table'] = 'field_data_field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['field'] = 'field_vimeo';
  $handler->display->display_options['fields']['field_vimeo']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_vimeo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_vimeo']['type'] = 'default';
  /* Field: Content: Tumblr link */
  $handler->display->display_options['fields']['field_tumblr']['id'] = 'field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['table'] = 'field_data_field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['field'] = 'field_tumblr';
  $handler->display->display_options['fields']['field_tumblr']['label'] = '';
  $handler->display->display_options['fields']['field_tumblr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tumblr']['click_sort_column'] = 'url';
  /* Field: Content: LinkedIn link */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: iTunes link */
  $handler->display->display_options['fields']['field_itunes']['id'] = 'field_itunes';
  $handler->display->display_options['fields']['field_itunes']['table'] = 'field_data_field_itunes';
  $handler->display->display_options['fields']['field_itunes']['field'] = 'field_itunes';
  $handler->display->display_options['fields']['field_itunes']['label'] = '';
  $handler->display->display_options['fields']['field_itunes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes']['click_sort_column'] = 'url';
  /* Field: Content: RSS link */
  $handler->display->display_options['fields']['field_rss']['id'] = 'field_rss';
  $handler->display->display_options['fields']['field_rss']['table'] = 'field_data_field_rss';
  $handler->display->display_options['fields']['field_rss']['field'] = 'field_rss';
  $handler->display->display_options['fields']['field_rss']['label'] = '';
  $handler->display->display_options['fields']['field_rss']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rss']['click_sort_column'] = 'url';
  /* Field: Content: Blogger link */
  $handler->display->display_options['fields']['field_blogger']['id'] = 'field_blogger';
  $handler->display->display_options['fields']['field_blogger']['table'] = 'field_data_field_blogger';
  $handler->display->display_options['fields']['field_blogger']['field'] = 'field_blogger';
  $handler->display->display_options['fields']['field_blogger']['label'] = '';
  $handler->display->display_options['fields']['field_blogger']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogger']['click_sort_column'] = 'url';

  /* Display: Address */
  $handler = $view->new_display('block', 'Address', 'address');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['multi_type'] = 'ul';

  /* Display: Links 1 */
  $handler = $view->new_display('block', 'Links 1', 'links1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Footer links - third column */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_footerlinks1';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_footerlinks1';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['entity_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';

  /* Display: Links 2 */
  $handler = $view->new_display('block', 'Links 2', 'links2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Footer links - fourth column */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_footerlinks2';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_footerlinks2';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['entity_id_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit the footer';

  /* Display: Edit link */
  $handler = $view->new_display('block', 'Edit link', 'editlink');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<strong><a href="/node/add/footer/">Create a new footer</a></strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit the footer';

  /* Display: Social media block */
  $handler = $view->new_display('block', 'Social media block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Follow Us';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'socialblock clearfix';
  $export['footer'] = $view;

  return $export;
}
