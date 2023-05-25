/**
 * Project 채용 정보 시스템
 */


#include "SignOutUI.h"

/**
 * SignOutUI implementation
 */


/**
 * @return void
 */

void SignOutUI::startInterface() {
    char id[MAX_STRING];

    fprintf(out_fp, "2.1. 로그아웃\n>");

    if (control->doSignOut()) {
        fprintf(out_fp, " %s\n", id);
    }

    fprintf(out_fp, "\n");
}

void SignOutUI::setControl(SignOut* control) {
    this->control = control;
}