<?php
/**
 * @file
 * humanitarianresponse_i18n.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_i18n_strongarm() {
  $export = array();

  /*$strongarm = new stdClass;
  $strongarm->disabled = FALSE; 
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = TRUE;
  $export['i18n_hide_translation_links'] = $strongarm;*/

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'filtered_html' => 'filtered_html',
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
    'simple' => 0,
  );
  $export['i18n_string_allowed_formats'] = $strongarm;
  
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  /*$strongarm = new stdClass;
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_variable_conf';
  $strongarm->value = array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'anonymous',
    3 => 'site_frontpage',
    4 => 'feed_description',
    5 => 'maintenance_mode_message',
    6 => 'user_registration_help',
    7 => 'user_mail_register_admin_created_[mail_part]',
    8 => 'user_mail_register_no_approval_required_[mail_part]',
    9 => 'user_mail_register_pending_approval_[mail_part]',
    10 => 'user_mail_password_reset_[mail_part]',
    11 => 'user_mail_status_activated_[mail_part]',
    12 => 'user_mail_status_blocked_[mail_part]',
    13 => 'user_mail_cancel_confirm_[mail_part]',
    14 => 'user_mail_status_canceled_[mail_part]',
    15 => 'user_picture_guidelines',
  );
  $export['i18n_variable_conf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_variable_list';
  $strongarm->value = array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'anonymous',
    3 => 'site_frontpage',
    4 => 'feed_description',
    5 => 'maintenance_mode_message',
    6 => 'user_registration_help',
    7 => 'user_mail_register_admin_created_subject',
    8 => 'user_mail_register_admin_created_body',
    9 => 'user_mail_register_no_approval_required_subject',
    10 => 'user_mail_register_no_approval_required_body',
    11 => 'user_mail_register_pending_approval_subject',
    12 => 'user_mail_register_pending_approval_body',
    13 => 'user_mail_password_reset_subject',
    14 => 'user_mail_password_reset_body',
    15 => 'user_mail_status_activated_subject',
    16 => 'user_mail_status_activated_body',
    17 => 'user_mail_status_blocked_subject',
    18 => 'user_mail_status_blocked_body',
    19 => 'user_mail_cancel_confirm_subject',
    20 => 'user_mail_cancel_confirm_body',
    21 => 'user_mail_status_canceled_subject',
    22 => 'user_mail_status_canceled_body',
    23 => 'user_picture_guidelines',
  );
  $export['i18n_variable_list'] = $strongarm;*/

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_frequency';
  $strongarm->value = 7;
  $export['l10n_update_check_frequency'] = $strongarm;

  return $export;
}
