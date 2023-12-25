# QMK-VIAL-CSTC40
My CSTC40 config

This adds a hardcoded solid color, and per layer colors for non-transparent keys (any that are overwritten by that layer over the base layer), as well as setting the color for all alpha keys when capslock is active.

Currently the base color is HSV, while the rest are RGB, so limiting their brightness must be done in config.h by editing #define RGB_MATRIX_MAXIMUM_BRIGHTNESS

The goal being to get HSV working at all stages so brightness levels are retained.  However, for now I'm fine with it as is, and don't have surplus time to give to implementing the change.

Editing Hard Coded Layer Colors:

../keyboards/kprepublic/cstc40/config.h

// ================================================ HSV ================================================ //
#define RGB_MATRIX_DEFAULT_HUE 2//10 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 230//253 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 100 // Sets the default brightness value, if none has been set
// ================================================ HSV ================================================ //


../keyboards/kprepublic/cstc40/single_pcb/keymaps/error/keymap.c
For each CASE, and the last if statement for capslock:
              rgb_matrix_set_color(index, RGB_CORAL);
            
