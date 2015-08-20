<?php
/**
 * @file
 * blog_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function blog_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_blog_notify_blog_moderators_for_approval_of_new_node'] = entity_import('rules_config', '{ "rules_blog_notify_blog_moderators_for_approval_of_new_node" : {
      "LABEL" : "BLOG - Notify blog moderators for approval of new node",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "pending" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "266833737" : "266833737" } },
            "subject" : "Blog entry ready for approval",
            "message" : "The following blog entry is awaiting your approval:\\r\\n\\r\\n[node:url]\\r\\n\\r\\nTo approve this entry, select the \\u0022Published\\u0022 option in the \\u0022Approval status\\u0022 dropdown on the entry\\u0027s edit screen.\\r\\n",
            "from" : "notify@[site:url-brief]"
          }
        }
      ]
    }
  }');
  $items['rules_blog_notify_moderators_when_entries_are_updated'] = entity_import('rules_config', '{ "rules_blog_notify_moderators_when_entries_are_updated" : {
      "LABEL" : "BLOG - Notify moderators when entries are updated",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node-unchanged:status" ], "value" : "1" } },
        { "data_is" : { "data" : [ "node:status" ], "value" : "1" } },
        { "data_is" : {
            "data" : [ "node-unchanged:field-blogworkflow" ],
            "value" : "published"
          }
        },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "published" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "266833737" : "266833737" } },
            "subject" : "A blog entry on your website has been updated",
            "message" : "A blog entry on your website which was previously published has been updated:\\r\\n\\r\\n[node:url]\\r\\n\\r\\nNo action is required on your part. This is just a courtesy notification in case you would like to review the updated entry.",
            "from" : "notify@[site:url-brief]"
          }
        }
      ]
    }
  }');
  $items['rules_blog_publish_new_nodes_set_to_published'] = entity_import('rules_config', '{ "rules_blog_publish_new_nodes_set_to_published" : {
      "LABEL" : "BLOG - Publish new nodes set to published",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "published" } }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_notify_blog_moderators_for_approval'] = entity_import('rules_config', '{ "rules_notify_blog_moderators_for_approval" : {
      "LABEL" : "BLOG - Notify blog moderators for approval",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : {
            "data" : [ "node-unchanged:field-blogworkflow" ],
            "op" : "IN",
            "value" : { "value" : { "draft" : "draft", "published" : "published" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "pending" } },
        { "data_is" : { "data" : [ "node:status" ], "value" : "0" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "266833737" : "266833737" } },
            "subject" : "Blog entry ready for approval",
            "message" : "\\r\\nThe following blog entry is awaiting your approval:\\r\\n\\r\\n[node:url]\\r\\n\\r\\nTo approve this entry, select the \\u0022Published\\u0022 option in the \\u0022Approval status\\u0022 dropdown on the entry\\u0027s edit screen.\\r\\n",
            "from" : "notify@[site:url-brief]"
          }
        }
      ]
    }
  }');
  $items['rules_notify_when_comments_submitted'] = entity_import('rules_config', '{ "rules_notify_when_comments_submitted" : {
      "LABEL" : "BLOG - Notify when comments submitted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "comment:author" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "266833737" : "266833737" } },
            "subject" : "An anonymous comment has been submitted on your website",
            "message" : "A new comment from an anonymous visitor has been submitted on your website. To review this comment, sign in to your website and visit your site\\u0027s comments moderation page:\\r\\n\\r\\n[site:url]admin\\/content\\/comment\\/approval\\r\\n\\r\\nor go directly to the page for this entry and click \\u0022Approve\\u0022 just below the comment:\\r\\n\\r\\n[comment:url]\\r\\n\\r\\n",
            "from" : "notify@[site:url-brief]"
          }
        }
      ]
    }
  }');
  $items['rules_publish_approved_blog_entries'] = entity_import('rules_config', '{ "rules_publish_approved_blog_entries" : {
      "LABEL" : "BLOG - Publish approved blog entries",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node:status" ], "value" : "0" } },
        { "data_is" : {
            "data" : [ "node-unchanged:field-blogworkflow" ],
            "op" : "IN",
            "value" : { "value" : { "draft" : "draft", "pending" : "pending" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "published" } }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_set_workflow_to_draft'] = entity_import('rules_config', '{ "rules_set_workflow_to_draft" : {
      "LABEL" : "BLOG - Set workflow to Draft when unpublished outside of workflow",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node-unchanged:status" ], "value" : "1" } },
        { "data_is" : { "data" : [ "node:status" ], "value" : "0" } },
        { "data_is" : { "data" : [ "node:field-blogworkflow" ], "value" : "published" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-blogworkflow" ], "value" : "draft" } }
      ]
    }
  }');
  $items['rules_set_workflow_to_published'] = entity_import('rules_config', '{ "rules_set_workflow_to_published" : {
      "LABEL" : "BLOG - Set workflow to published when published outside of workflow",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : { "data" : [ "node-unchanged:status" ], "value" : "0" } },
        { "data_is" : { "data" : [ "node:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-blogworkflow" ], "value" : "published" } }
      ]
    }
  }');
  $items['rules_unpublish_when_moved_out_of_published_state'] = entity_import('rules_config', '{ "rules_unpublish_when_moved_out_of_published_state" : {
      "LABEL" : "BLOG - Unpublish when moved out of published state",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "blog_entry" : "blog_entry" } }
          }
        },
        { "data_is" : {
            "data" : [ "node-unchanged:field-blogworkflow" ],
            "value" : "published"
          }
        },
        { "data_is" : {
            "data" : [ "node:field-blogworkflow" ],
            "op" : "IN",
            "value" : { "value" : { "draft" : "draft", "pending" : "pending" } }
          }
        },
        { "data_is" : { "data" : [ "node:status" ], "value" : "1" } }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
