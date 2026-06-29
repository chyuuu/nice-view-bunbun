# Custom single-image right screen

This fork has been modified so the right/peripheral nice!view uses one static image instead of the 16-frame crystal animation.

## File to replace

Replace:

```text
boards/shields/nice_view_gem/assets/custom_logo.c
```

with your LVGL Image Converter output.

## Important

Keep the exported image symbol named:

```c
custom_logo
```

For example, if the converter outputs:

```c
const lv_img_dsc_t my_image = { ... };
```

rename it to:

```c
const lv_img_dsc_t custom_logo = { ... };
```

Also rename the data array if needed so the descriptor points to the correct data.

## Suggested converter settings

- Size: 69 × 68 px, unless you also adjust the position in `widgets/animation.c`
- Color format: I1 / Indexed 1-bit
- Output: C array

## Position

The image is placed in:

```text
boards/shields/nice_view_gem/widgets/animation.c
```

Current position:

```c
lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
```

Change `36, 0` if you want to move it.
