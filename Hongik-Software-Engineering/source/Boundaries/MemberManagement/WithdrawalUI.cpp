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

    const char* id = Member::getInstance()->getId().c_str();
    if (control->withDrawal()) {    
        fprintf(out_fp, " %s\n", id);
    }

    fprintf(out_fp, "\n");
}

void WithdrawalUI::setControl(Withdrawal* control) {
    this->control = control;
}