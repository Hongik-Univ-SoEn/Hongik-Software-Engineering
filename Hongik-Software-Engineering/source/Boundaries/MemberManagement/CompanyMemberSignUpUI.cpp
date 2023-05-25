/**
 * Project 채용 정보 시스템
 */


#include "CompanyMemberSignUpUI.h"
#include <vector>
using namespace std;
/**
 * CompanyMemberSignUpUI implementation
 */


/**
 * @return vector<string>
 */
void CompanyMemberSignUpUI::startInterface() {
    char id[MAX_STRING], pw[MAX_STRING], companyName[MAX_STRING], businessNumber[MAX_STRING];

    
    fprintf(out_fp, "1.1. 회원가입\n>");
    fscanf(in_fp, "%s %s %s %s", companyName, businessNumber, id, pw);

    vector<string> v;
    v.push_back(id);
    v.push_back(pw);
    v.push_back(companyName);
    v.push_back(businessNumber);

    if (control->doSignUp(v)) {
        fprintf(out_fp, " 1 %s %s %s %s\n", companyName, businessNumber, id, pw);
    }

    fprintf(out_fp, "\n");
}