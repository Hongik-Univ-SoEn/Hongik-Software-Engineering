/**
 * Project 채용 정보 시스템
 */


#include "AddRecruitUI.h"
#include "./../../Entities/CompanyMember.h"
/**
 * AddRecruitUI implementation
 */

 
void AddRecruitUI::startInterface() {
    char companyName[MAX_STRING], workField[MAX_STRING], deadline[MAX_STRING], businessNumber [MAX_STRING];
    char numOfHire[MAX_STRING];

    CompanyMember* companyMember = (CompanyMember*) Member::getInstance();
    companyMember->getInfo();

    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, " %s %s %s", workField, numOfHire, deadline);

    vector<string> info;
    info.push_back(companyName);
    info.push_back(businessNumber);
    info.push_back(workField);
    info.push_back(numOfHire);
    info.push_back(deadline);

    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, " %s %d %s", workField, &numOfHire, deadline);

    fprintf(out_fp, " %s %d %s", workField, &numOfHire, deadline);
    fprintf(out_fp, "\n");
}

/**
 * @param workField
 */
void AddRecruitUI::setControl(AddRecruit* control) {
   this->control = control;
}
