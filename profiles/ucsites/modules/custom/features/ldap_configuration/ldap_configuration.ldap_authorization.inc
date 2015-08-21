<?php
/**
 * @file
 * ldap_configuration.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function ldap_configuration_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass();
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'uchicago_ldap';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->derive_from_dn = FALSE;
  $consumer_type->derive_from_dn_attr = '';
  $consumer_type->derive_from_attr = TRUE;
  $consumer_type->derive_from_attr_attr = 'ucisMemberOf';
  $consumer_type->derive_from_attr_use_first_attr = FALSE;
  $consumer_type->derive_from_attr_nested = FALSE;
  $consumer_type->derive_from_entry = FALSE;
  $consumer_type->derive_from_entry_nested = FALSE;
  $consumer_type->derive_from_entry_entries = '';
  $consumer_type->derive_from_entry_entries_attr = '';
  $consumer_type->derive_from_entry_attr = '';
  $consumer_type->derive_from_entry_search_all = FALSE;
  $consumer_type->derive_from_entry_use_first_attr = FALSE;
  $consumer_type->derive_from_entry_user_ldap_attr = 'dn';
  $consumer_type->mappings = 'uc:org:nsit:webservices:members|site owner
uc:org:nsit:webservices:members|site developer
uc:org:itservices:support:4tech|site owner
';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = TRUE;
  $consumer_type->create_consumers = FALSE;
  $consumer_type->regrant_ldap_provisioned = TRUE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
