<?php
/**
 * @file
 * Admin settings form for databasics module.
 */

function databasics_settings_form($form, &$form_state) {

  $form['databasics_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#description' => t('Message to dispaly at bottom of content pages.'),
    '#default_value' => variable_get('databasics_message', 'You have viewed this page.'),
    '#element_validate' => array('token_element_validate'),
    '#token_types' => array('databasics-page'),
  );

  $form['token_help'] = array(
    '#theme' => 'token_tree_link',
    '#token_types' => array('databasics-page'),
  );

  return system_settings_form($form);
}
