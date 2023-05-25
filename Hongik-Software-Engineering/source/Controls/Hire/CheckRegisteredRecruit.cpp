/**
 * Project 채용 정보 시스템
 */


#include "CheckRegisteredRecruit.h"
#include "../../Entities/CompanyMember.h"

/**
 * CheckRegisteredRecruit implementation
 */


vector<string> CheckRegisteredRecruit::showRecruit() {
    Recruit* recruit = ((CompanyMember*)Member::getInstance())->getRecruits()[0];
    auto recruitInfo = recruit->getRecruitInfo();

    vector<string> v;
    v.push_back(recruitInfo[2]);
    v.push_back(recruitInfo[3]);
    v.push_back(recruitInfo[4]);

    return v;
}