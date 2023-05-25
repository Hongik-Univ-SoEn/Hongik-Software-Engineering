/**
 * Project 채용 정보 시스템
 */


#include "SignOutUI.h"
#include "../../Entities/Member.h"
/**
 * SignOutUI implementation
 */


/**
 * @return void
 */

void SignOutUI::startInterface() {
    auto id = Member::getInstance()->getId();

    fprintf(out_fp, "2.2. 로그아웃\n>");

    if (control->doSignOut()) {
        fprintf(out_fp, " %s\n", id.c_str());
    }

    fprintf(out_fp, "\n");
}

void SignOutUI::setControl(SignOut* control) {
    this->control = control;
}