<?php

/**
 * @file
 * Admin settings for the Group views module.
 */

function og_views_settings() {
  $form = array();
  $form['#config'] = 'og_views.settings';

  $form['og_views_global_view'] = array(
    '#type' => 'select',
    '#title' => t('Group views default'),
    '#options' => og_views_field_allowed_values(FALSE),
    '#default_value' => config_get('og_views.settings', 'og_views_global_view'),
  );

  return system_settings_form($form);
}
