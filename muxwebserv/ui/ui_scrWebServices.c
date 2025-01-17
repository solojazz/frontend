#include "ui.h"

void ui_screen_init(lv_obj_t *ui_pnlContent) {
    ui_pnlShell = lv_obj_create(ui_pnlContent);
    ui_pnlBrowser = lv_obj_create(ui_pnlContent);
    ui_pnlTerminal = lv_obj_create(ui_pnlContent);
    ui_pnlSyncthing = lv_obj_create(ui_pnlContent);
    ui_pnlResilio = lv_obj_create(ui_pnlContent);
    ui_pnlNTP = lv_obj_create(ui_pnlContent);

    ui_lblShell = lv_label_create(ui_pnlShell);
    ui_lblBrowser = lv_label_create(ui_pnlBrowser);
    ui_lblTerminal = lv_label_create(ui_pnlTerminal);
    ui_lblSyncthing = lv_label_create(ui_pnlSyncthing);
    ui_lblResilio = lv_label_create(ui_pnlResilio);
    ui_lblNTP = lv_label_create(ui_pnlNTP);

    ui_icoShell = lv_img_create(ui_pnlShell);
    ui_icoBrowser = lv_img_create(ui_pnlBrowser);
    ui_icoTerminal = lv_img_create(ui_pnlTerminal);
    ui_icoSyncthing = lv_img_create(ui_pnlSyncthing);
    ui_icoResilio = lv_img_create(ui_pnlResilio);
    ui_icoNTP = lv_img_create(ui_pnlNTP);

    ui_droShell = lv_dropdown_create(ui_pnlShell);
    ui_droBrowser = lv_dropdown_create(ui_pnlBrowser);
    ui_droTerminal = lv_dropdown_create(ui_pnlTerminal);
    ui_droSyncthing = lv_dropdown_create(ui_pnlSyncthing);
    ui_droResilio = lv_dropdown_create(ui_pnlResilio);
    ui_droNTP = lv_dropdown_create(ui_pnlNTP);
}
