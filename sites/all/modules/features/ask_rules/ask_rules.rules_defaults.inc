<?php
/**
 * @file
 * ask_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ask_rules_default_rules_configuration() {
  $items = array();
  $items['rules_user_register_notification'] = entity_import('rules_config', '{ "rules_user_register_notification" : {
      "LABEL" : "User register notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "marjina.costel@gmail.com",
            "subject" : "New user has been registered",
            "message" : "[account:name] has been registered to the site. To view user profile click on the link below.\\r\\n[account:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
