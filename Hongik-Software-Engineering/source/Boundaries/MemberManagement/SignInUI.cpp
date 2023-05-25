/**
 * Project 채용 정보 시스템
 */


#include "SignInUI.h"
 /**
  * SignInUI implementation
  */

/**
 * @return void
 */
void SignInUI::startInterface() {
    char id[MAX_STRING], pw[MAX_STRING];

    fprintf(out_fp, "2.1. 로그인\n>");
    fscanf(in_fp, "%s %s", id, pw);

    vector<string> v;
    v.push_back(string(id));
    v.push_back(string(pw));

    if (control->doSignIn(v)) {
        fprintf(out_fp, " %s %s\n", id, pw);
    }

    fprintf(out_fp, "\n");
}

void SignInUI::setControl(SignIn* control) {
	this->control = control;
}