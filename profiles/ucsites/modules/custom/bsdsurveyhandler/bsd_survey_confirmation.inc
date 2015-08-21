<?php
function bsd_survey_manager_confirmation_page($nid, $sid)
{
    // Get the submission array
    $submission = webform_menu_submission_load($sid, $nid);
    // Process the submission
    $scores = bsd_survey_manager_process_submission($submission);
    // output
    $header = "<p>The COmprehensive Score for financial Toxicity (COST) ranges from 0 to 44. A score of 0 represents the highest financial toxicity and a score of 44 represents the lowest financial toxicity. These scores have been subdivided into 4 grades based on the impact of financial toxicity on patients quality of life:</p>";
    $header .= "<h3>Impact on Quality of Life:</h3>";
    $header .= "<ul class=\"impact\"><li>Grade 0: no impact on quality of life</li><li>Grade 1: mild impact</li><li>Grade 2: moderate impact</li><li>Grade 3: high impact</li></ul>";
    $header .= "<h4>Your results:</h4>";
    $header .= "<p><strong>COST Score:</strong>&nbsp;" . $scores['cost'] . "&nbsp;&nbsp;&nbsp;<strong>Grade:</strong>&nbsp;" . $scores['score'] . "</p>";

    // return $scores_tab_out;
    //tabbed version if we want to add results screens tabs
    $name = 'fin_toxicity_tabs';
    $settings = array(
        'ajax' => 0,
        'hide_if_empty' => 1,
        'default_tab' => 0,
        'title' => 'Financial Toxicity Tabs',
        'rendered' => 'ui_tabs',
        'ui_tabs' => array(collapsible => 0),
        'style' => 'nostyle',
    );

    $custom_tabs[] = array(
        'title' => 'By Insurance Type',
        'contents' => t($header . $scores['insurance_details']),
        'weight' => -44,
    );

    $custom_tabs[] = array(
        'title' => 'By Employment Status',
        'contents' => t($header . $scores['employment_details']),
        'weight' => -45,
    );

    $custom_tabs[] = array(
        'title' => 'By Gender',
        'contents' => t($header . $scores['gender_details']),
        'weight' => -46,
    );

    $custom_tabs[] = array(
        'title' => 'COST Score',
        'contents' => t($header . '<p>'.$scores['details'].'</p>'),
        'weight' => -47,
    );


    $tabs = quicktabs_build_quicktabs($name, $settings, $custom_tabs);
    return $tabs;
}


function bsd_survey_manager_process_submission($submission = array())
{
    $scores = array('cost' => -1, 'score' => -1);
    if (isset($submission->data[1]['value'])) {
        $answers = $submission->data[1]['value'];
        $scores['cost'] = _bsd_survey_manager_calculate($answers);
        $scores['score'] = _get_financial_toxicity_score($scores['cost']);
        $scores['details'] = _get_percentile_details($scores['cost']);
        $gender_details = '<strong>Male</strong><br />' . _get_percentile_details($scores['cost'], '_gender_male') . '<br /><br />';
        $gender_details .= '<strong>Female</strong><br />' . _get_percentile_details($scores['cost'], '_gender_female');
        $scores['gender_details'] = $gender_details;
        $employment_details = '<strong>Employed</strong><br />' . _get_percentile_details($scores['cost'], '_employment_employed');
        $employment_details .= '<br /><br /><strong>Not Employed</strong><br />' . _get_percentile_details($scores['cost'], '_employment_notemployed');
        $employment_details .= '<br /><br /><strong>Retired</strong><br />' . _get_percentile_details($scores['cost'], '_employment_retired');
        $employment_details .= '<br /><br /><strong>On Disability</strong><br />' . _get_percentile_details($scores['cost'], '_employment_disability');
        $scores['employment_details'] = $employment_details;
        $insurance_details = '<strong>Private insurance with or without supplemental</strong><br />' . _get_percentile_details($scores['cost'], '_insurance_private');
        $insurance_details .= '<br /><br /><strong>Medicare</strong><br />' . _get_percentile_details($scores['cost'], '_insurance_medicare');
        $insurance_details .= '<br /><br /><strong>Medicaid</strong><br />' . _get_percentile_details($scores['cost'], '_insurance_medicaid');
        $insurance_details .= '<br /><br /><strong>Uninsured</strong><br />' . _get_percentile_details($scores['cost'], '_insurance_uninsured');
        $scores['insurance_details'] = $insurance_details;

    }
    return $scores;
}

function _bsd_survey_manager_calculate($answers = array())
{
    $reverse = explode(",", variable_get('bsd_survey_reverse_score_list'));
    $total = count($answers);
    $score = 0;
    foreach ($answers as $key => $value) {
        $score += in_array($key, $reverse) ? 4 - $value : $value;
    }
    return round(($score * 11) / $total);
}

function _get_financial_toxicity_score($cost = 0)
{
    $final_score = array(
        'no_impact' => 0,
        'mild_impact' => 1,
        'moderate_impact' => 2,
        'high_impact' => 3,
    );
    foreach ($final_score as $key => $value) {
        $max = strlen(variable_get($key . '_max')) > 0 ? variable_get($key . '_max') : false;
        $min = strlen(variable_get($key . '_min')) > 0 ? variable_get($key . '_min') : false;
        if (($min && $max) && ($cost >= $min && $cost <= $max)) {
            return $value;
        } elseif (($min && !$max) && ($cost >= $min)) {
            return $value;
        } elseif (($max && !$min) && ($cost <= $max)) {
            return $value;
        }
    }
}

function _get_percentile_details($cost = 0, $type = "")
{
    $percentile_ranking_details = "";
    foreach (config_percentile_keys() as $key => $value) {
        $max_val = empty($type) ? $value . '_max' : $value . '_max' . $type;
        $min_val = empty($type) ? $value . '_min' : $value . '_min' . $type;
        $details_var = is_null($type) ? $value . '_details' : $value . '_details' . $type;
        $max = strlen(variable_get($max_val)) > 0 ? variable_get($max_val) : 0;
        $min = strlen(variable_get($min_val)) > 0 ? variable_get($min_val) : 0;
        if ($cost > $min && ($cost <= $max || $max == 0) ) {
            return variable_get($details_var);
        }
    }
    return $percentile_ranking_details;
}