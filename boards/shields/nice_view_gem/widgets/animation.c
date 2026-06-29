#include <zephyr/kernel.h>
#include "animation.h"

/*
 * The peripheral/right screen draws one static image.
 * Replace boards/shields/nice_view_gem/assets/custom_logo.c with your
 * generated LVGL C image, keeping the exported symbol named `custom_logo`.
 */
LV_IMG_DECLARE(custom_logo);

void draw_animation(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);
    lv_img_set_src(art, &custom_logo);
    lv_img_set_angle(art, 900); 
    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
