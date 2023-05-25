/**
 * Project 채용 정보 시스템
 */


#include "WithdrawalUI.h"
#include "../../Entities/Member.h"

/**
 * WithdrawalUI implementation
 */


/**
 * @return void
 */
void WithdrawalUI::startInterface() {
    fprintf(out_fp, "1.2. 회원탈퇴\n>");

    auto id = Member::getInstance()->getId();
    if (control->withDrawal()) {    
        fprintf(out_fp, " %s\n", id.c_str());
    }

    fprintf(out_fp, "\n");
}

void WithdrawalUI::setControl(Withdrawal* control) {
    this->control = control;
}