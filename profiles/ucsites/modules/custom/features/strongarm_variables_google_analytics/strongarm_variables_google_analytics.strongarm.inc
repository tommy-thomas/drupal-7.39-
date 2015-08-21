<?php
/**
 * @file
 * strongarm_variables_google_analytics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function strongarm_variables_google_analytics_strongarm() {
  $export = array();

  // Taking this out for now. Decided that just using .uchicago.edu would be better.
  // $analyticsDomain = '.' . $_SERVER['HTTP_HOST'];
  $analyticsDomain = 'uchicago.edu';
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_after';
  $strongarm->value =
    '_gaq.push(["secondTracker._setAccount","UA-3572058-1"]);
    _gaq.push(["secondTracker._trackPageview"]);
    _gaq.push(["secondTracker._setDomainName","' . $analyticsDomain . '"]);
    _gaq.push(["thirdTracker._setAccount","UA-27427140-1"]);
    _gaq.push(["thirdTracker._trackPageview"]);';
  $export['googleanalytics_codesnippet_after'] = $strongarm;

  return $export;
}
