/**
 * Project 채용 정보 시스템
 */


#include "IndividualMemberSignUpUI.h"
#include <vector>
using namespace std;
/**
 * IndividualMemberSignUpUI implementation
 */


/**
 * @return vector<string>
 */
void IndividualMemberSignUpUI::startInterface() {
    char id[MAX_STRING], pw[MAX_STRING], name[MAX_STRING], socialSecurityNumber[MAX_STRING];

    fprintf(out_fp, "1.1. 회원가입\n>");

    fscanf(in_fp, "%s %s %s %s", id, pw, name, socialSecurityNumber);

    vector<string> v;
    v.push_back(id);
    v.push_back(pw);
    v.push_back(name);
    v.push_back(socialSecurityNumber);

    if (control->doSignUp(v)) {
        fprintf(out_fp, " 2 %s %s %s %s\n", name, socialSecurityNumber, id, pw);
    }

    fprintf(out_fp, "\n");
}