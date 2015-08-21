<?php
/**
 * @file
 * homepage_feature_and_mini_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_feature_and_mini_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_features';
  $view->description = 'The gallery of features on the homepage';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Homepage features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Feature image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_homeimage';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_homeimage';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '<div class="homeimage grid_6 alpha">
	[entity_id_1]
</div>';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'image_style' => 'homefeature',
    'image_link' => '',
  );
  /* Field: Content: Feature link */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_featurelink';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_featurelink';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['entity_id']['type'] = 'default';
  /* Field: Content: Feature blurb */
  $handler->display->display_options['fields']['field_featureblurbtext']['id'] = 'field_featureblurbtext';
  $handler->display->display_options['fields']['field_featureblurbtext']['table'] = 'field_data_field_featureblurbtext';
  $handler->display->display_options['fields']['field_featureblurbtext']['field'] = 'field_featureblurbtext';
  $handler->display->display_options['fields']['field_featureblurbtext']['label'] = '';
  $handler->display->display_options['fields']['field_featureblurbtext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featureblurbtext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featureblurbtext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featureblurbtext']['hide_alter_empty'] = FALSE;
  /* Field: Content: Feature blurb (OLD - DO NOT USE) */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_featureblurb';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_featureblurb';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="homefeature grid_5 omega pull_2">
	<div class="grid_3 alpha omega push_2">
		<p>[entity_id_3][field_featureblurbtext] [entity_id]</p>
	</div>
	<div class="grid_5 alpha omega">
		<h3>[title]</h3>
	</div>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this feature';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage_feature' => 'homepage_feature',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Homepage features block */
  $handler = $view->new_display('block', 'Homepage features block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['homepage_features'] = $view;

  $view = new view();
  $view->name = 'homepage_mini_features';
  $view->description = 'Mini features typically displayed in the homepage right column';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Homepage mini features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Mini feature image */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_minifeatureimage';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_minifeatureimage';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'image_style' => 'columnwidth',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_miniblurb';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_miniblurb';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'helper-links';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this mini-feature';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage_mini_feature' => 'homepage_mini_feature',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Mini features block */
  $handler = $view->new_display('block', 'Mini features block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['homepage_mini_features'] = $view;

  return $export;
}
