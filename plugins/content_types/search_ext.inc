<?php
/**
 * @file
 * Search extension's pane for ctools.
 */

$plugin = array(
  'title' => t('Search ext'),
  'description' => t('Extension for fast searching by category'),
  'category' => t('Page elements'),
  'single' => TRUE,
  'render callback' => 'search_ext_plugin_render',
  'admin info' => 'easyddb_search_ext_admin_info',
);

/**
 * Plugin content renderer.
 */
function search_ext_plugin_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  $block->module = 'easyddb_search_ext';
  $block->content = drupal_get_form('easyddb_search_ext_form');

  return $block;
}

/**
* Show info in admin form.
*/
function easyddb_search_ext_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = t('Search extention pane');
    $block->content = t('Shows select for searching by category');
    return $block;
  }
}

/**
 * Returns an edit form for the content type.
 * @todo mb neccessary some options.
 */
function easyddb_search_ext_plugin_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form = array();

  return $form;
}
