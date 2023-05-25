/**
 * Project 채용 정보 시스템
 */


#include "AddRecruitUI.h"
#include "./../../Entities/CompanyMember.h"
/**
 * AddRecruitUI implementation
 */

 
void AddRecruitUI::startInterface() {
    char workField[MAX_STRING], deadline[MAX_STRING];
    char numOfHire[MAX_STRING];

    auto info = ((CompanyMember*)Member::getInstance())->getInfo();

    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, "%s %s %s", workField, numOfHire, deadline);

    vector<string> v;
    v.push_back(info[0]);
    v.push_back(info[1]);
    v.push_back(workField);
    v.push_back(numOfHire);
    v.push_back(deadline);
    control->addRecruit(v);

    fprintf(out_fp, " %s %d %s", workField, &numOfHire, deadline);
    fprintf(out_fp, "\n\n");
}

/**
 * @param workField
 */
void AddRecruitUI::setControl(AddRecruit* control) {
   this->control = control;
}
