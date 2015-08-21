<?php
/**
 * Adds a menu for setting the user's api_key.
 *  Implement hook_menu().
 */
function bsd_survey_manager_menu()
{

    $items = array();

    //Confirmation page
    $items['financial-toxicity-survey/confirmation/%/%'] = array(
        'page callback' => 'bsd_survey_manager_confirmation_page',
        'page arguments' => array(2, 3),
        'access arguments' => array("access content"),
        'type' => MENU_CALLBACK,
        'title' => t('Results')
    );

    //Admin menu items
    $items ['admin/config/content/bsd_survey_manager'] = array(
        'title' => 'Financial Toxicity Survey Configuration',
        'description' => 'Use this section to update calculator values.',
        'weight' => -100,
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_calculator_form', 1),
        'access arguments' => array('change bsd calculated values'),
    );

    // calculator
    $items['admin/config/content/bsd_survey_manager/manage_calculator'] = array(
        'title' => 'Calculator',
        'weight' => -6,
        'type' => MENU_DEFAULT_LOCAL_TASK,
    );

    // Reverse scoring
    $items['admin/config/content/bsd_survey_manager/reverse_score'] = array(
        'title' => 'Reverse scoring',
        'description' => 'Reverse scoring',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('reverse_score_form', 1),
        'weight' => -5,
        'access arguments' => array('change bsd calculated values'),
        'type' => MENU_LOCAL_TASK,
    );

    $items['admin/config/content/bsd_survey_manager/general'] = array(
        'title' => 'General Percentile',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', ''),
        'weight' => -4,
        'type' => MENU_LOCAL_TASK,
        'access arguments' => array('change bsd calculated values'),
    );

    // Gender
    $items['admin/config/content/bsd_survey_manager/gender'] = array(
        'title' => 'By gender',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_gender_male'),
        'weight' => -3,
        'type' => MENU_LOCAL_TASK,
        'access arguments' => array('change bsd calculated values'),
    );


    $items['admin/config/content/bsd_survey_manager/gender/male'] = array(
        'title' => 'Male',
        'type' => MENU_DEFAULT_LOCAL_TASK,
    );

    $items['admin/config/content/bsd_survey_manager/gender/female'] = array(
        'title' => 'Female',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_gender_female'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 3,
        'access arguments' => array('change bsd calculated values')
    );

    // Employment
    $items['admin/config/content/bsd_survey_manager/employment'] = array(
        'title' => 'By employment',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_employment_employed'),
        'weight' => -2,
        'type' => MENU_LOCAL_TASK,
        'access arguments' => array('change bsd calculated values')
    );

    $items['admin/config/content/bsd_survey_manager/employment/employed'] = array(
        'title' => 'Employed',
        'type' => MENU_DEFAULT_LOCAL_TASK,
    );

    $items['admin/config/content/bsd_survey_manager/employment/notemployed'] = array(
        'title' => 'Not Employed',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_employment_notemployed'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 3,
        'access arguments' => array('change bsd calculated values')
    );

    $items['admin/config/content/bsd_survey_manager/employment/retired'] = array(
        'title' => 'Retired',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_employment_retired'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 4,
        'access arguments' => array('change bsd calculated values')
    );

    $items['admin/config/content/bsd_survey_manager/employment/disability'] = array(
        'title' => 'On Disability',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_employment_disability'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 5,
        'access arguments' => array('change bsd calculated values')
    );

    // Insurance
    $items['admin/config/content/bsd_survey_manager/insurance'] = array(
        'title' => 'By insurance',
        'description' => 'Set stratification by insurance.',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_insurance_private'),
        'weight' => -1,
        'type' => MENU_LOCAL_TASK,
        'access arguments' => array('change bsd calculated values')
    );

    $items['admin/config/content/bsd_survey_manager/insurance/private'] = array(
        'title' => 'Private',
        'type' => MENU_DEFAULT_LOCAL_TASK,
    );

    $items['admin/config/content/bsd_survey_manager/insurance/medicare'] = array(
        'title' => 'Medicare',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_insurance_medicare'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 3,
        'access arguments' => array('change bsd calculated values')
    );

    $items['admin/config/content/bsd_survey_manager/insurance/medicaid'] = array(
        'title' => 'Medicaid',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_insurance_medicaid'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 4,
        'access arguments' => array('change bsd calculated values')
    );


    $items['admin/config/content/bsd_survey_manager/insurance/uninsured'] = array(
        'title' => 'Uninsured',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('bsd_survey_manager_set_percentile_form', '_insurance_uninsured'),
        'type' => MENU_LOCAL_TASK + MENU_CONTEXT_INLINE,
        'weight' => 5,
        'access arguments' => array('change bsd calculated values')
    );

    return $items;
}

/**
 * Implements hook_form().
 * Reverse how we set values, set range instead of score.
 */
function bsd_survey_manager_set_calculator_form($form, &$form_state)
{
    $form['no_impact_range'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'No impact ranges for score of 0.',
        '#weight' => 0,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['no_impact_range']['no_impact_max'] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('no_impact_max'),
        '#size' => 2,
        '#maxlength' => 25,
    );

    $form['no_impact_range']['no_impact_min'] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than or equal to.',
        '#default_value' => variable_get('no_impact_min'),
        '#size' => 2,
        '#maxlength' => 25,
        '#suffix' => '</div>',
    );
    ###
    $form['mild_impact_range'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Mild impact ranges for score of 1.',
        '#weight' => 1,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['mild_impact_range']['mild_impact_max'] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('mild_impact_max'),
        '#size' => 2,
        '#maxlength' => 25,
    );

    $form['mild_impact_range']['mild_impact_min'] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than or equal to.',
        '#default_value' => variable_get('mild_impact_min'),
        '#size' => 2,
        '#maxlength' => 25,
        '#suffix' => '</div>',
    );
    ###
    $form['moderate_impact_range'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Moderate impact ranges for score of 2.',
        '#weight' => 2,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['moderate_impact_range']['moderate_impact_max'] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('moderate_impact_max'),
        '#size' => 2,
        '#maxlength' => 25,
    );

    $form['moderate_impact_range']['moderate_impact_min'] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than or equal to.',
        '#default_value' => variable_get('moderate_impact_min'),
        '#size' => 2,
        '#maxlength' => 25,
        '#suffix' => '</div>',
    );
    ###
    $form['high_impact_range'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'High impact ranges for score of 3.',
        '#weight' => 3,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['high_impact_range']['high_impact_max'] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('high_impact_max'),
        '#size' => 2,
        '#maxlength' => 25,
    );

    $form['high_impact_range']['high_impact_min'] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than or equal to.',
        '#default_value' => variable_get('high_impact_min'),
        '#size' => 2,
        '#maxlength' => 25,
        '#suffix' => '</div>',
    );


    $form['submit'] = array(
        '#weight' => 5,
        '#type' => 'submit',
        '#value' => t('Submit'),
    );

    $form['#submit'][] = 'bsd_survey_manager_config_form_submit';

    return $form;
}

/**
 * Implements hook_form().
 */
function reverse_score_form($form, &$form_state)
{

    $form['bsd_survey_reverse_score_list'] = array(
        '#type' => 'textfield',
        '#title' => t('List questions that are reversed scored.'),
        '#default_value' => variable_get('bsd_survey_reverse_score_list'),
        '#description' => t('List question numbers that will be scored in reverse, comma separated.'),
        '#size' => 25,
        '#maxlength' => 50,
        '#required' => FALSE,
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );

    $form['#submit'][] = 'bsd_survey_manager_config_form_submit';

    return $form;
}

/**
 * Implements hook_form().
 */
function bsd_survey_manager_set_percentile_form($form, &$form_state, $type = "")
{

    // Above 95 percentile
    $form['above_95_percentile'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 95.',
        '#weight' => 7,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['above_95_percentile']['above_95_percentile_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('above_95_percentile_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['above_95_percentile']['above_95_percentile_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('above_95_percentile_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['above_95_percentile']['above_95_percentile_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('above_95_percentile_details' . $type)
    );

    // Between 90 and 95 percentile.
    $form['between_91_and_95'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 90 and less than or equal to 95.',
        '#weight' => 6,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_91_and_95']['between_91_and_95_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_91_and_95_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_91_and_95']['between_91_and_95_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_91_and_95_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_91_and_95']['between_91_and_95_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_91_and_95_details' . $type)
    );

    // Between 75 and 90 percentile.
    $form['between_76_and_90'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 75 and less than or equal to 90.',
        '#weight' => 5,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_76_and_90']['between_76_and_90_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_76_and_90_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_76_and_90']['between_76_and_90_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_76_and_90_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_76_and_90']['between_76_and_90_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_76_and_90_details' . $type)
    );

    // Between 50 and 75 percentile.
    $form['between_51_and_75'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 50 and less than or equal to 75.',
        '#weight' => 4,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_51_and_75']['between_51_and_75_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_51_and_75_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_51_and_75']['between_51_and_75_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_51_and_75_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_51_and_75']['between_51_and_75_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_51_and_75_details' . $type)
    );

    // Between 25 and 50 percentile.
    $form['between_26_and_50'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 25 and less than or equal to 50.',
        '#weight' => 3,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_26_and_50']['between_26_and_50_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_26_and_50_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_26_and_50']['between_26_and_50_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_26_and_50_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_26_and_50']['between_26_and_50_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_26_and_50_details' . $type)
    );

    // Between 10 and 25 percentile.
    $form['between_11_and_25'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 10 and less than or equal to 25.',
        '#weight' => 2,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_11_and_25']['between_11_and_25_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_11_and_25_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_11_and_25']['between_11_and_25_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_11_and_25_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_11_and_25']['between_11_and_25_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_11_and_25_details' . $type)
    );

    // Between 5 and 10 percentile.
    $form['between_6_and_10'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 5 and less than or equal to 10.',
        '#weight' => 1,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_6_and_10']['between_6_and_10_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_6_and_10_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_6_and_10']['between_6_and_10_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_6_and_10_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_6_and_10']['between_6_and_10_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_6_and_10_details' . $type)
    );

    // Between 0 and 5 percentile.
    $form['between_0_and_5'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<div style="display:inline">',
        '#title' => 'Greater than 0 and less than or equal to 5.',
        '#weight' => 0,
        '#collapsible' => TRUE,
        '#collapsed' => TRUE
    );

    $form['between_0_and_5']['between_0_and_5_max' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Less than or equal to.',
        '#default_value' => variable_get('between_0_and_5_max' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_0_and_5']['between_0_and_5_min' . $type] = array(
        '#type' => 'textfield',
        '#title' => 'Greater than.',
        '#default_value' => variable_get('between_0_and_5_min' . $type),
        '#size' => 2,
        '#maxlength' => 25
    );

    $form['between_0_and_5']['between_0_and_5_details' . $type] = array(
        '#type' => 'textarea',
        '#title' => t('Details'),
        '#default_value' => variable_get('between_0_and_5_details' . $type)
    );

    // admin page type
    $form['bsd_admin_form_type'] = array(
        '#type' => 'value',
        '#value' => $type
    );

    $form['submit'] = array(
        '#weight' => 8,
        '#type' => 'submit',
        '#value' => t('Submit'),
    );

    $form['#submit'][] = 'bsd_survey_manager_percentile_form_submit';

    return $form;
}

/**
 * Save configuration settings for module.
 * For score and questions to be scored in reverse.
 * Implements hook_node_submit()
 */
function bsd_survey_manager_config_form_submit($form, &$form_state)
{
    if (isset($form_state['values']['bsd_survey_reverse_score_list'])) {
        variable_set('bsd_survey_reverse_score_list', $form_state['values']['bsd_survey_reverse_score_list']);
    } else {
        foreach (config_keys() as $key => $value) {
            variable_set($value, $form_state['values'][$value]);
        }
    }

    drupal_set_message(t('The values have been updated'));
}

/**
 * Save configuration settings for module.
 * Implements hook_node_submit()
 */
function bsd_survey_manager_percentile_form_submit($form, &$form_state)
{
    $fields = array('_max', '_min', '_details');
    foreach (config_percentile_keys() as $key => $value) {
        foreach ($fields as $key => $v) {
            $field_name = strlen($form_state['values']['bsd_admin_form_type']) > 0 ? $value . $v . $form_state['values']['bsd_admin_form_type'] : $value . $v;
            variable_set($field_name, $form_state['values'][$field_name]);
        }
    }
    drupal_set_message(t('The values have been updated'));
}

function config_keys()
{
    return array(
        'no_impact_min',
        'no_impact_max',
        'mild_impact_min',
        'mild_impact_max',
        'moderate_impact_max',
        'moderate_impact_min',
        'high_impact_max',
        'high_impact_min',
    );
}

function config_percentile_keys()
{
    return array(
        'above_95_percentile',
        'between_91_and_95',
        'between_76_and_90',
        'between_51_and_75',
        'between_26_and_50',
        'between_11_and_25',
        'between_6_and_10',
        'between_0_and_5',
    );
}

/**
 * Adds permission types for this module
 * Implements hook_permission()
 */
function bsd_survey_manager_permission()
{
    return array(
        'change bsd calculated values' => array(
            'title' => t('Change BSD calculated values'),
            'description' => t('Update values for calculating Financial Toxicity Survey score.'),
        ),
    );
}