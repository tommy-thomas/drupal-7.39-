<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function plaisance_bsd_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['plaisance_bsd_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('plaisance_bsd sample setting'),
    '#default_value' => theme_get_setting('plaisance_bsd_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  unset($form['breadcrumb']);
  unset($form['support']);
  unset($form['themedev']['zen_wireframes']);

  $form['theme_settings'] = array(
    '#disabled' => TRUE,
  );


  // We are editing the $form in place, so we don't need to return anything.
}
