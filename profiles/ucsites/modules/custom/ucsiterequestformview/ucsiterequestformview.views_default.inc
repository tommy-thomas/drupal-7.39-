<?php
/**
 * @file
 * ucsiterequestformview.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ucsiterequestformview_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'uc_site_request_view';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'UC Site Request';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Request';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    156164251 => '156164251',
    30037204 => '30037204',
    212870258 => '212870258',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_short_name' => 'field_short_name',
    'field_install_complete' => 'field_install_complete',
    'field_status_create_date' => 'field_status_create_date',
    'field_status_launch' => 'field_status_launch',
    'field_billing_annual_rate' => 'field_billing_annual_rate',
    'field_billing_client_group' => 'field_billing_client_group',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_install_complete' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_create_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_launch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_billing_annual_rate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_billing_client_group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Preferred address for this site */
  $handler->display->display_options['fields']['field_short_name']['id'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['fields']['field_short_name']['field'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['label'] = 'Vhost';
  $handler->display->display_options['fields']['field_short_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_name']['alter']['path'] = '[path]';
  /* Field: Content: Installed? */
  $handler->display->display_options['fields']['field_install_complete']['id'] = 'field_install_complete';
  $handler->display->display_options['fields']['field_install_complete']['table'] = 'field_data_field_install_complete';
  $handler->display->display_options['fields']['field_install_complete']['field'] = 'field_install_complete';
  /* Field: Content: Date created */
  $handler->display->display_options['fields']['field_status_create_date']['id'] = 'field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['table'] = 'field_data_field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['field'] = 'field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['settings'] = array(
    'format_type' => 'simple_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Launch status */
  $handler->display->display_options['fields']['field_status_launch']['id'] = 'field_status_launch';
  $handler->display->display_options['fields']['field_status_launch']['table'] = 'field_data_field_status_launch';
  $handler->display->display_options['fields']['field_status_launch']['field'] = 'field_status_launch';
  $handler->display->display_options['fields']['field_status_launch']['label'] = 'Status';
  /* Field: Content: Annual rate */
  $handler->display->display_options['fields']['field_billing_annual_rate']['id'] = 'field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['table'] = 'field_data_field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['field'] = 'field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['label'] = 'Rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Client group */
  $handler->display->display_options['fields']['field_billing_client_group']['id'] = 'field_billing_client_group';
  $handler->display->display_options['fields']['field_billing_client_group']['table'] = 'field_data_field_billing_client_group';
  $handler->display->display_options['fields']['field_billing_client_group']['field'] = 'field_billing_client_group';
  /* Sort criterion: Content: Installed? (field_install_complete) */
  $handler->display->display_options['sorts']['field_install_complete_value']['id'] = 'field_install_complete_value';
  $handler->display->display_options['sorts']['field_install_complete_value']['table'] = 'field_data_field_install_complete';
  $handler->display->display_options['sorts']['field_install_complete_value']['field'] = 'field_install_complete_value';
  /* Sort criterion: Content: Date created (field_status_create_date) */
  $handler->display->display_options['sorts']['field_status_create_date_value']['id'] = 'field_status_create_date_value';
  $handler->display->display_options['sorts']['field_status_create_date_value']['table'] = 'field_data_field_status_create_date';
  $handler->display->display_options['sorts']['field_status_create_date_value']['field'] = 'field_status_create_date_value';
  $handler->display->display_options['sorts']['field_status_create_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ucsiterequestform' => 'ucsiterequestform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Preferred address for this site (field_short_name) */
  $handler->display->display_options['filters']['field_short_name_value']['id'] = 'field_short_name_value';
  $handler->display->display_options['filters']['field_short_name_value']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['filters']['field_short_name_value']['field'] = 'field_short_name_value';
  $handler->display->display_options['filters']['field_short_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_short_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_short_name_value']['expose']['operator_id'] = 'field_short_name_value_op';
  $handler->display->display_options['filters']['field_short_name_value']['expose']['label'] = 'Filter by vhost';
  $handler->display->display_options['filters']['field_short_name_value']['expose']['operator'] = 'field_short_name_value_op';
  $handler->display->display_options['filters']['field_short_name_value']['expose']['identifier'] = 'field_short_name_value';
  $handler->display->display_options['filters']['field_short_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
  );
  /* Filter criterion: Content: Launch status (field_status_launch) */
  $handler->display->display_options['filters']['field_status_launch_value']['id'] = 'field_status_launch_value';
  $handler->display->display_options['filters']['field_status_launch_value']['table'] = 'field_data_field_status_launch';
  $handler->display->display_options['filters']['field_status_launch_value']['field'] = 'field_status_launch_value';
  $handler->display->display_options['filters']['field_status_launch_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_launch_value']['expose']['operator_id'] = 'field_status_launch_value_op';
  $handler->display->display_options['filters']['field_status_launch_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_launch_value']['expose']['operator'] = 'field_status_launch_value_op';
  $handler->display->display_options['filters']['field_status_launch_value']['expose']['identifier'] = 'field_status_launch_value';
  $handler->display->display_options['filters']['field_status_launch_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
    156164251 => 0,
    10138702 => 0,
  );
  /* Filter criterion: Content: Client group (field_billing_client_group) */
  $handler->display->display_options['filters']['field_billing_client_group_tid']['id'] = 'field_billing_client_group_tid';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['table'] = 'field_data_field_billing_client_group';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['field'] = 'field_billing_client_group_tid';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_billing_client_group_tid']['expose']['operator_id'] = 'field_billing_client_group_tid_op';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['expose']['label'] = 'Client group';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['expose']['operator'] = 'field_billing_client_group_tid_op';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['expose']['identifier'] = 'field_billing_client_group_tid';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    61522925 => 0,
    210394380 => 0,
    254633039 => 0,
    266833737 => 0,
    235655953 => 0,
    30037204 => 0,
    212870258 => 0,
    156164251 => 0,
    10138702 => 0,
  );
  $handler->display->display_options['filters']['field_billing_client_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_billing_client_group_tid']['vocabulary'] = 'client_groups';

  /* Display: Site Requests */
  $handler = $view->new_display('page', 'Site Requests', 'ucsiterequestform_approve');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'uc-site-request-view';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Two';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-site-request-tabs';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'DOWNLOAD';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Preferred address for this site */
  $handler->display->display_options['fields']['field_short_name']['id'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['fields']['field_short_name']['field'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['label'] = 'Vhost';
  $handler->display->display_options['fields']['field_short_name']['alter']['path'] = '[path]';
  /* Field: Content: Installed? */
  $handler->display->display_options['fields']['field_install_complete']['id'] = 'field_install_complete';
  $handler->display->display_options['fields']['field_install_complete']['table'] = 'field_data_field_install_complete';
  $handler->display->display_options['fields']['field_install_complete']['field'] = 'field_install_complete';
  /* Field: Content: Date created */
  $handler->display->display_options['fields']['field_status_create_date']['id'] = 'field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['table'] = 'field_data_field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['field'] = 'field_status_create_date';
  $handler->display->display_options['fields']['field_status_create_date']['settings'] = array(
    'format_type' => 'simple_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Launch status */
  $handler->display->display_options['fields']['field_status_launch']['id'] = 'field_status_launch';
  $handler->display->display_options['fields']['field_status_launch']['table'] = 'field_data_field_status_launch';
  $handler->display->display_options['fields']['field_status_launch']['field'] = 'field_status_launch';
  /* Field: Content: Name of billing contact */
  $handler->display->display_options['fields']['field_billing_contact_name']['id'] = 'field_billing_contact_name';
  $handler->display->display_options['fields']['field_billing_contact_name']['table'] = 'field_data_field_billing_contact_name';
  $handler->display->display_options['fields']['field_billing_contact_name']['field'] = 'field_billing_contact_name';
  /* Field: Content: CnetID of billing contact */
  $handler->display->display_options['fields']['field_billing_contact_cnet']['id'] = 'field_billing_contact_cnet';
  $handler->display->display_options['fields']['field_billing_contact_cnet']['table'] = 'field_data_field_billing_contact_cnet';
  $handler->display->display_options['fields']['field_billing_contact_cnet']['field'] = 'field_billing_contact_cnet';
  /* Field: Content: FAS account number */
  $handler->display->display_options['fields']['field_billing_fas_number']['id'] = 'field_billing_fas_number';
  $handler->display->display_options['fields']['field_billing_fas_number']['table'] = 'field_data_field_billing_fas_number';
  $handler->display->display_options['fields']['field_billing_fas_number']['field'] = 'field_billing_fas_number';
  /* Field: Content: Annual rate */
  $handler->display->display_options['fields']['field_billing_annual_rate']['id'] = 'field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['table'] = 'field_data_field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['field'] = 'field_billing_annual_rate';
  $handler->display->display_options['fields']['field_billing_annual_rate']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Client group */
  $handler->display->display_options['fields']['field_billing_client_group']['id'] = 'field_billing_client_group';
  $handler->display->display_options['fields']['field_billing_client_group']['table'] = 'field_data_field_billing_client_group';
  $handler->display->display_options['fields']['field_billing_client_group']['field'] = 'field_billing_client_group';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ucsiterequestform' => 'ucsiterequestform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'uc_site_request_view/export';
  $handler->display->display_options['displays'] = array(
    'ucsiterequestform_approve' => 'ucsiterequestform_approve',
    'default' => 0,
  );
  $export['uc_site_request_view'] = $view;

  return $export;
}
