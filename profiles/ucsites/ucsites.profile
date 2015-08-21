<?php
/**
 * @file
<<<<<<< HEAD
 * Enables modules and site configuration for a ucsites site installation.
=======
 * Enables modules and site configuration for a ucsites installation.
>>>>>>> fc258f9c491d7cf998d34f42ebe8c12996f8ceed
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function ucsites_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}
