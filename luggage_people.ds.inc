<?php
/**
 * @file
 * luggage_people.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function luggage_people_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|people|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'people';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'recent_posts' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|people|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function luggage_people_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|people|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'people';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_people_position',
        1 => 'field_people_image',
        2 => 'field_people_bio',
        3 => 'field_people_expertise',
        4 => 'field_people_other_affiliations',
        5 => 'field_people_interdepartmental',
        6 => 'field_people_major',
        7 => 'field_people_advisor',
        8 => 'field_people_affiliation',
        9 => 'field_people_education',
        10 => 'field_people_teaching',
        11 => 'field_people_cv',
        12 => 'field_people_email',
        13 => 'field_tags',
        14 => 'field_people_website',
        15 => 'recent_posts',
        16 => 'field_people_phone',
        17 => 'field_people_street',
        18 => 'field_people_city',
        19 => 'field_people_state',
        20 => 'field_people_postal',
      ),
    ),
    'fields' => array(
      'field_people_position' => 'ds_content',
      'field_people_image' => 'ds_content',
      'field_people_bio' => 'ds_content',
      'field_people_expertise' => 'ds_content',
      'field_people_other_affiliations' => 'ds_content',
      'field_people_interdepartmental' => 'ds_content',
      'field_people_major' => 'ds_content',
      'field_people_advisor' => 'ds_content',
      'field_people_affiliation' => 'ds_content',
      'field_people_education' => 'ds_content',
      'field_people_teaching' => 'ds_content',
      'field_people_cv' => 'ds_content',
      'field_people_email' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_people_website' => 'ds_content',
      'recent_posts' => 'ds_content',
      'field_people_phone' => 'ds_content',
      'field_people_street' => 'ds_content',
      'field_people_city' => 'ds_content',
      'field_people_state' => 'ds_content',
      'field_people_postal' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|people|full'] = $ds_layout;

  return $export;
}
