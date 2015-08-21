<?php
/**
 * @file
 * ucsiterequestform.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ucsiterequestform_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_additional_info|node|ucsiterequestform|default';
  $field_group->group_name = 'group_site_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_comments',
      1 => 'field_howdidyouhear',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-additional-info field-group-fieldset',
      ),
    ),
  );
  $export['group_site_additional_info|node|ucsiterequestform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_billing|node|ucsiterequestform|default';
  $field_group->group_name = 'group_site_billing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billing Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_billing_annual_rate',
      1 => 'field_billing_client_group',
      2 => 'field_billing_contact_cnet',
      3 => 'field_billing_contact_name',
      4 => 'field_billing_fas_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-billing field-group-fieldset',
      ),
    ),
  );
  $export['group_site_billing|node|ucsiterequestform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_requestor|node|ucsiterequestform|default';
  $field_group->group_name = 'group_site_requestor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Requestor Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_department',
      1 => 'field_email',
      2 => 'field_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-requestor field-group-fieldset',
      ),
    ),
  );
  $export['group_site_requestor|node|ucsiterequestform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_status|node|ucsiterequestform|default';
  $field_group->group_name = 'group_site_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '4',
    'children' => array(
      0 => 'field_approved',
      1 => 'field_install_complete',
      2 => 'field_status_aliases',
      3 => 'field_status_create_date',
      4 => 'field_status_launch',
      5 => 'field_status_notes',
      6 => 'field_status_preferred_vhost',
      7 => 'field_status_url_reserved',
      8 => 'field_status_termination_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-status field-group-fieldset',
      ),
    ),
  );
  $export['group_site_status|node|ucsiterequestform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_website_info|node|ucsiterequestform|default';
  $field_group->group_name = 'group_site_website_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Website Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_cnet',
      1 => 'field_cnet_editors',
      2 => 'field_current_site',
      3 => 'field_short_name',
      4 => 'field_site_owner_name',
      5 => 'field_site_description',
      6 => 'field_site_owner_affiliation',
      7 => 'field_site_is_faculty',
      8 => 'field_site_owner_department',
      9 => 'field_site_owner_division',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Website Information',
      'instance_settings' => array(
        'classes' => 'group-site-website-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_site_website_info|node|ucsiterequestform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_billing_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_billing_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billing Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_billing_annual_rate',
      1 => 'field_billing_client_group',
      2 => 'field_billing_contact_cnet',
      3 => 'field_billing_contact_name',
      4 => 'field_billing_fas_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-siterequest-billing-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_siterequest_billing_info|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_contact_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_department',
      1 => 'field_email',
      2 => 'field_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-siterequest-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_siterequest_contact_info|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_db_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_db_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_database_name',
      1 => 'field_dbhost',
      2 => 'field_dbpassword',
      3 => 'field_dbport',
      4 => 'field_dbusername',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-siterequest-db-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_siterequest_db_info|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_dbrequest|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_dbrequest';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database Request',
    'weight' => '5',
    'children' => array(
      0 => 'field_siterequest_dbrequest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-siterequest-dbrequest field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_siterequest_dbrequest|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Website Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_cnet',
      1 => 'field_cnet_editors',
      2 => 'field_current_site',
      3 => 'field_short_name',
      4 => 'field_site_owner_name',
      5 => 'field_site_description',
      6 => 'field_site_owner_affiliation',
      7 => 'field_site_is_faculty',
      8 => 'field_site_owner_department',
      9 => 'field_site_owner_division',
      10 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Website Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-siterequest-info field-group-fieldset',
        'description' => 'The following information is required, and will be used to configure your UChicago Site. Note that Site Owners will have full editorial rights to your UChicago Site and will be able to add additional site editors and contributors.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_siterequest_info|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_more_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_more_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_comments',
      1 => 'field_howdidyouhear',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-siterequest-more-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_siterequest_more_info|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_siterequest_status|node|ucsiterequestform|form';
  $field_group->group_name = 'group_siterequest_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '8',
    'children' => array(
      0 => 'field_approved',
      1 => 'field_install_complete',
      2 => 'field_status_aliases',
      3 => 'field_status_create_date',
      4 => 'field_status_launch',
      5 => 'field_status_notes',
      6 => 'field_status_preferred_vhost',
      7 => 'field_status_url_reserved',
      8 => 'field_status_termination_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-siterequest-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_siterequest_status|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|ucsiterequestform|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site Installed',
    'weight' => '0',
    'children' => array(
      0 => 'field_install_complete',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site Installed',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Check this when the database and files for this site have been installed.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_status|node|ucsiterequestform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|node|ucsiterequestform|form';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ucsiterequestform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_username',
      1 => 'field_add_site_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_info|node|ucsiterequestform|form'] = $field_group;

  return $export;
}
