#include "ui.h"

void ui_screen_init(lv_obj_t *ui_pnlContent) {
    ui_pnlCore = lv_obj_create(ui_pnlContent);
    ui_pnlGovernor = lv_obj_create(ui_pnlContent);

    ui_lblCore = lv_label_create(ui_pnlCore);
    ui_lblGovernor = lv_label_create(ui_pnlGovernor);

    ui_icoCore = lv_img_create(ui_pnlCore);
    ui_icoGovernor = lv_img_create(ui_pnlGovernor);
}