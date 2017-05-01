<?php
/**
 * @file
 * wwm_file_type_displays_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwm_file_type_displays_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function wwm_file_type_displays_feature_image_default_styles() {
  $styles = array();

  // Exported image style: scale_240x135.
  $styles['scale_240x135'] = array(
    'label' => 'Scale 240 x 135 (16:9)',
    'effects' => array(
      131 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 135,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      132 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-16x12-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_240x180.
  $styles['scale_240x180'] = array(
    'label' => 'Scale 240 x 180 (4:3)',
    'effects' => array(
      135 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 180,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      136 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-32x24-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_320x180.
  $styles['scale_320x180'] = array(
    'label' => 'Scale 320 x 180 (16:9)',
    'effects' => array(
      129 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 180,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      130 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-32x24-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_320x240.
  $styles['scale_320x240'] = array(
    'label' => 'Scale 320 x 240 (4:3)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      59 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_360x270.
  $styles['scale_360x270'] = array(
    'label' => 'Scale 360 x 270 (4:3)',
    'effects' => array(
      133 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 270,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      134 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-32x24-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_480x270.
  $styles['scale_480x270'] = array(
    'label' => 'Scale 480 x 270 (16:9)',
    'effects' => array(
      137 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 270,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      138 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_480x360.
  $styles['scale_480x360'] = array(
    'label' => 'Scale 480 x 360 (4:3)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      54 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_560x315.
  $styles['scale_560x315'] = array(
    'label' => 'Scale 560 x 315 (16:9)',
    'effects' => array(
      126 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 560,
          'height' => 315,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      127 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_640x360.
  $styles['scale_640x360'] = array(
    'label' => 'Scale 640 x 360 (16:9)',
    'effects' => array(
      128 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      124 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: scale_640x480.
  $styles['scale_640x480'] = array(
    'label' => 'Scale 640 x 480 (4:3)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      48 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'scale' => '',
          'path' => 'public://LSW-watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
