/* Hide the billing information for Faculty */

jQuery('#edit-field-site-is-faculty-und :radio').change(function () {
  var selected = jQuery(this).filter(':checked').val();
  if (selected == 1) {
    jQuery('.group-siterequest-billing-info').hide();
    jQuery('#edit-field-billing-contact-name-und-0-value').val('NOT BILLABLE');
    jQuery('#edit-field-billing-contact-cnet-und-0-value').val('NOT BILLABLE');
    jQuery('#edit-field-billing-fas-number-und-0-value').val('0-00000-0000');
  } else {
    jQuery('.group-siterequest-billing-info').show();
    if (jQuery('#edit-field-billing-contact-name-und-0-value').val() == 'NOT BILLABLE') { 
      jQuery('#edit-field-billing-contact-name-und-0-value').val('');
      jQuery('#edit-field-billing-contact-cnet-und-0-value').val('');
      jQuery('#edit-field-billing-fas-number-und-0-value').val('');
    }
  }
});