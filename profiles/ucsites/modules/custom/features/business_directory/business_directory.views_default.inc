<?php
/**
 * @file
 * business_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function business_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_bd_contact' => 'field_bd_contact',
    'field_bd_address' => 'field_bd_address',
    'field_bd_phone' => 'field_bd_phone',
    'field_bd_email' => 'field_bd_email',
    'field_bd_website' => 'field_bd_website',
    'field_bd_cert_agencies' => 'field_bd_cert_agencies',
    'field_bd_cert_types' => 'field_bd_cert_types',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_cert_agencies' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bd_cert_types' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Business';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_bd_contact']['id'] = 'field_bd_contact';
  $handler->display->display_options['fields']['field_bd_contact']['table'] = 'field_data_field_bd_contact';
  $handler->display->display_options['fields']['field_bd_contact']['field'] = 'field_bd_contact';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_bd_phone']['id'] = 'field_bd_phone';
  $handler->display->display_options['fields']['field_bd_phone']['table'] = 'field_data_field_bd_phone';
  $handler->display->display_options['fields']['field_bd_phone']['field'] = 'field_bd_phone';
  $handler->display->display_options['fields']['field_bd_phone']['exclude'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_bd_email']['id'] = 'field_bd_email';
  $handler->display->display_options['fields']['field_bd_email']['table'] = 'field_data_field_bd_email';
  $handler->display->display_options['fields']['field_bd_email']['field'] = 'field_bd_email';
  $handler->display->display_options['fields']['field_bd_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bd_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bd_email']['alter']['text'] = '<br /><a href="mailto:[field_bd_email-email]">Email</a>';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_bd_website']['id'] = 'field_bd_website';
  $handler->display->display_options['fields']['field_bd_website']['table'] = 'field_data_field_bd_website';
  $handler->display->display_options['fields']['field_bd_website']['field'] = 'field_bd_website';
  $handler->display->display_options['fields']['field_bd_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bd_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bd_website']['alter']['text'] = '<br /><a href="[field_bd_website-url]">Website</a>';
  $handler->display->display_options['fields']['field_bd_website']['click_sort_column'] = 'url';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_bd_address']['id'] = 'field_bd_address';
  $handler->display->display_options['fields']['field_bd_address']['table'] = 'field_data_field_bd_address';
  $handler->display->display_options['fields']['field_bd_address']['field'] = 'field_bd_address';
  $handler->display->display_options['fields']['field_bd_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bd_address']['alter']['text'] = '[field_bd_address]
[field_bd_phone]
[field_bd_email]
[field_bd_website]';
  $handler->display->display_options['fields']['field_bd_address']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bd_address']['element_class'] = 'directory-address';
  /* Field: Content: Certification Agencies */
  $handler->display->display_options['fields']['field_bd_cert_agencies']['id'] = 'field_bd_cert_agencies';
  $handler->display->display_options['fields']['field_bd_cert_agencies']['table'] = 'field_data_field_bd_cert_agencies';
  $handler->display->display_options['fields']['field_bd_cert_agencies']['field'] = 'field_bd_cert_agencies';
  $handler->display->display_options['fields']['field_bd_cert_agencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bd_cert_agencies']['multi_type'] = 'ul';
  /* Field: Content: Certification Types */
  $handler->display->display_options['fields']['field_bd_cert_types']['id'] = 'field_bd_cert_types';
  $handler->display->display_options['fields']['field_bd_cert_types']['table'] = 'field_data_field_bd_cert_types';
  $handler->display->display_options['fields']['field_bd_cert_types']['field'] = 'field_bd_cert_types';
  $handler->display->display_options['fields']['field_bd_cert_types']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bd_cert_types']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_directory_entry' => 'business_directory_entry',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Business directory';
  $export['business_directory'] = $view;

  return $export;
}
