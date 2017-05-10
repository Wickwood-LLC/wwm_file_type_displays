<?php
/**
 * @file
 * wwm_file_type_displays_feature.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function wwm_file_type_displays_feature_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_link__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__media_link__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_original__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__media_original__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__media_link__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__media_link__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__media_original__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__media_original__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210',
    'image_link' => '',
  );
  $export['image__polaroid_landscape__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210-rotate-left',
    'image_link' => '',
  );
  $export['image__polaroid_landscape_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210-rotate-right',
    'image_link' => '',
  );
  $export['image__polaroid_landscape_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270',
    'image_link' => '',
  );
  $export['image__polaroid_portrait__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270-rotate-left',
    'image_link' => '',
  );
  $export['image__polaroid_portrait_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270-rotate-right',
    'image_link' => '',
  );
  $export['image__polaroid_portrait_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120',
    'image_link' => '',
  );
  $export['image__scale_160x120__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120_rotate_left_7',
    'image_link' => '',
  );
  $export['image__scale_160x120_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120_rotate_right_7',
    'image_link' => '',
  );
  $export['image__scale_160x120_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_240x135__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x135',
    'image_link' => '',
  );
  $export['image__scale_240x135__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_240x180__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x180',
    'image_link' => '',
  );
  $export['image__scale_240x180__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x180__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x180',
    'image_link' => '',
  );
  $export['image__scale_320x180__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240',
    'image_link' => '',
  );
  $export['image__scale_320x240__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240_rotate_left_7',
    'image_link' => '',
  );
  $export['image__scale_320x240_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240_rotate_right_7',
    'image_link' => '',
  );
  $export['image__scale_320x240_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_360x270__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_360x270',
    'image_link' => '',
  );
  $export['image__scale_360x270__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x270__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x270',
    'image_link' => '',
  );
  $export['image__scale_480x270__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
    'image_link' => '',
  );
  $export['image__scale_480x360__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360_rotate_left_7',
    'image_link' => '',
  );
  $export['image__scale_480x360_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360_rotate_right_7',
    'image_link' => '',
  );
  $export['image__scale_480x360_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_560x315__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_560x315',
    'image_link' => '',
  );
  $export['image__scale_560x315__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x360__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x360',
    'image_link' => '',
  );
  $export['image__scale_640x360__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480',
    'image_link' => '',
  );
  $export['image__scale_640x480__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480_rotate_left_7',
    'image_link' => '',
  );
  $export['image__scale_640x480_rotate_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480_rotate_right_7',
    'image_link' => '',
  );
  $export['image__scale_640x480_rotate_right__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__media_original__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_oembed';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
  );
  $export['video__media_original__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_oembed_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_vimeo_image';
  $file_display->weight = -32;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_youtube_image';
  $file_display->weight = -34;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '240',
    'height' => '135',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_240x135__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '135',
  );
  $export['video__scale_240x135__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x135',
  );
  $export['video__scale_240x135__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x135',
  );
  $export['video__scale_240x135__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '135',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_240x135__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x135',
  );
  $export['video__scale_240x135__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x135__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '135',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_240x135__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '240',
    'height' => '180',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_240x180__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '180',
  );
  $export['video__scale_240x180__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x180',
  );
  $export['video__scale_240x180__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x180',
  );
  $export['video__scale_240x180__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '180',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_240x180__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_240x180',
  );
  $export['video__scale_240x180__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_240x180__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '240',
    'height' => '180',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_240x180__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '320',
    'height' => '180',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_320x180__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '180',
  );
  $export['video__scale_320x180__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x180',
  );
  $export['video__scale_320x180__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x180',
  );
  $export['video__scale_320x180__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '180',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_320x180__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x180',
  );
  $export['video__scale_320x180__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x180__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '180',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_320x180__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '320',
    'height' => '240',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_320x240__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '240',
  );
  $export['video__scale_320x240__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240',
  );
  $export['video__scale_320x240__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240',
  );
  $export['video__scale_320x240__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '240',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_320x240__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240',
  );
  $export['video__scale_320x240__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_320x240__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '240',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_320x240__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '360',
    'height' => '270',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_360x270__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '360',
    'height' => '270',
  );
  $export['video__scale_360x270__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_360x270',
  );
  $export['video__scale_360x270__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_360x270',
  );
  $export['video__scale_360x270__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '360',
    'height' => '270',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_360x270__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_360x270',
  );
  $export['video__scale_360x270__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_360x270__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '360',
    'height' => '270',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_360x270__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '480',
    'height' => '270',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_480x270__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '270',
  );
  $export['video__scale_480x270__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x270',
  );
  $export['video__scale_480x270__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x270',
  );
  $export['video__scale_480x270__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '270',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_480x270__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x270',
  );
  $export['video__scale_480x270__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x270__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '270',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_480x270__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '480',
    'height' => '360',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_480x360__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '360',
  );
  $export['video__scale_480x360__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['video__scale_480x360__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['video__scale_480x360__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '360',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_480x360__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['video__scale_480x360__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_480x360__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '360',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_480x360__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '560',
    'height' => '315',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_560x315__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '315',
  );
  $export['video__scale_560x315__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_560x315',
  );
  $export['video__scale_560x315__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_560x315',
  );
  $export['video__scale_560x315__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '315',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_560x315__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_560x315',
  );
  $export['video__scale_560x315__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_560x315__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '315',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_560x315__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '640',
    'height' => '360',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_640x360__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
  );
  $export['video__scale_640x360__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x360',
  );
  $export['video__scale_640x360__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x360',
  );
  $export['video__scale_640x360__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_640x360__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x360',
  );
  $export['video__scale_640x360__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x360__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_640x360__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__file_field_file_video';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '640',
    'height' => '480',
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__scale_640x480__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_oembed';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '480',
  );
  $export['video__scale_640x480__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_oembed_thumbnail';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480',
  );
  $export['video__scale_640x480__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480',
  );
  $export['video__scale_640x480__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_vimeo_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '480',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__scale_640x480__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480',
  );
  $export['video__scale_640x480__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__scale_640x480__media_youtube_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '480',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__scale_640x480__media_youtube_video'] = $file_display;

  return $export;
}
