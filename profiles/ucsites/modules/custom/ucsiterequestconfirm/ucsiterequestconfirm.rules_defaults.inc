<?php
/**
 * @file
 * ucsiterequestconfirm.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ucsiterequestconfirm_default_rules_configuration() {
  $items = array();
  $items['rules_send_site_request_email'] = entity_import('rules_config', '{ "rules_send_site_request_email" : {
      "LABEL" : "Send Site Request Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ucsiterequestform" : "ucsiterequestform" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "sites-help@lists.uchicago.edu",
            "subject" : "UChicago Site Request - [node:field-short-name]",
            "message" : "A new site has been requested.\\r\\n\\r\\nFrom: [node:field-name]\\r\\nSite Owner: [node:field-site-owner-name]\\r\\nCNET ID: [node:field_cnet]\\r\\nEmail: [node:field-email]\\r\\nVhost: [node:field-short-name]\\r\\nSite Name: [node:title]\\r\\n\\r\\nNotes: [node:field-comments]",
            "from" : "[node:field-email]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
