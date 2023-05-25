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

    // 컴페니 멤버로 Member클래스의 getInstane() 호출하여 companyMember, businessNumber를 가져온다.
    CompanyMember* companyMember = (CompanyMember*) Member::getInstance();
    companyMember->getInfo();

    //파일 입력을 받아 업무, 인원 수, 신청 마감일에 할당하고
    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, " %s %s %s", workField, numOfHire, deadline);

    //앞에서 받은 인자들을 vector<string> info 리스트에 넣어서
    //회사회원이 올린 채용공고로 등록을 시킨다.
    vector<string> info;
    info.push_back(companyName);
    info.push_back(businessNumber);
    info.push_back(workField);
    info.push_back(numOfHire);
    info.push_back(deadline);

    //txt 출력 파일에 출력한다.
    fprintf(out_fp, " %s %d %s", workField, &numOfHire, deadline);
    fprintf(out_fp, "\n");
}


void AddRecruitUI::setControl(AddRecruit* control) {
   
   this->control = control;
}
