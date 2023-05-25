/**
 * Project 채용 정보 시스템
 */


#include "AddRecruitUI.h"
#include "./../../Entities/CompanyMember.h"
/**
 * AddRecruitUI implementation
 */

 /*
    함수 이름   : AddRecruitUI::startInterface()
    기능  : Member class의 getInstance() 함수를 호출 하고 회사회원의 정보, 등록하고자 하는 채용 정보를 받아온다
    전달 인자 : 없음
    반환값 : 없음
  */
void AddRecruitUI::startInterface() {
    char workField[MAX_STRING], numOfHire[MAX_STRING], deadline[MAX_STRING];

    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, " %s %s %s", workField, numOfHire, deadline); 
    auto info = ((CompanyMember*)Member::getInstance())->getInfo();

    vector<string> v;
    v.push_back(info[0]);
    v.push_back(info[1]);
    v.push_back(workField);
    v.push_back(numOfHire);
    v.push_back(deadline);
    control->addRecruit(v);

    fprintf(out_fp, " %s %s %s", workField, numOfHire, deadline);
    fprintf(out_fp, "\n\n");
}
/*
   함수 이름   : AddRecruitUI::setControl(AddRecruit* control)
   기능  : 외부에서 AddRecruit class (control class)의 포인터 객체를 전달 받아, AddRecruitUI(boundary class)가 AddRecruit(control class)를 참조하도록 속성값으로 저장.
   전달 인자 : AddRecruit class의 포인터 객체
   반환값 : 없음.
 */
void AddRecruitUI::setControl(AddRecruit* control) {
   
   this->control = control;
}
