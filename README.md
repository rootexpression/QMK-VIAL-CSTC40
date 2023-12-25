
# QMK-VIAL-CSTC40
My CSTC40 config


https://github.com/rootexpression/QMK-VIAL-CSTC40/blob/main/Images/L0-4-b.webp

This adds a hard-coded solid color, and per layer colors for non-transparent keys (any that are overwritten by that layer over the base layer), as well as setting the color for all alpha keys when caps-lock is active.

Currently the base color is HSV, while the rest are RGB, so limiting their brightness must be done in config.h by editing `#define RGB_MATRIX_MAXIMUM_BRIGHTNESS`

The goal being to get HSV working at all stages so brightness levels are retained.  However, for now I'm fine with it as is, and don't have surplus time to give to implementing the change.

**Editing Hard Coded Layer Colors:**

*../keyboards/kprepublic/cstc40/config.h*
This is where you'll find the base layer color, as HSV.

    #define RGB_MATRIX_DEFAULT_HUE
    #define RGB_MATRIX_DEFAULT_SAT
    #define RGB_MATRIX_DEFAULT_VAL



*../keyboards/kprepublic/cstc40/single_pcb/keymaps/error/keymap.c*
This is where you'll find the layer colors as well as capslock.

For each CASE, and the last if statement for capslock, edit the RGB_[color]:

    rgb_matrix_set_color(index, RGB_RED);
            
Please see the QMK docs for how to make use of these settings.

https://docs.qmk.fm/#/feature_rgb_matrix?id=colors


This is not a complete vial instance.  Only the altered configs.
You will need to clone the VIAL repo, replace/add these files to the appropriate folders, and then you can compile/flash.

https://github.com/vial-kb/vial-qmk
