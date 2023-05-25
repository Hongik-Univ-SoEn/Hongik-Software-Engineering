/**
 * Project 채용 정보 시스템
 */


#include "MemberSignUpUI.h"

/**
 * MemberSignUpUI implementation
 */

int MemberSignUpUI::typeOfSignUp() {
    int type;
    fscanf(in_fp, "%d", &type);
    return type;
}

/**
 * @return void
 */
void MemberSignUpUI::startInterface() {
    char id[MAX_STRING], pw[MAX_STRING];

    fprintf(out_fp, "1.1. 회원가입\n>");
    fscanf(in_fp, "%s %s", id, pw);

    vector<string> v;
    v.push_back(id);
    v.push_back(pw);

    if (control->doSignUp(v)) {
        fprintf(out_fp, " 0 %s %s\n", id, pw);
    }

    fprintf(out_fp, "\n");
}

void MemberSignUpUI::setControl(MemberSignUp* control) {
    this->control = control;
}