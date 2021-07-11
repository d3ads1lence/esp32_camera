#pragma once

#include "esp_camera.h"

esp_err_t camera_init(void);
camera_fb_t* camera_get_frame(bool flash);
esp_err_t camera_return_frame(camera_fb_t* fb);