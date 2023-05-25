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
    char companyName[MAX_STRING], workField[MAX_STRING], deadline[MAX_STRING], businessNumber [MAX_STRING];
    char numOfHire[MAX_STRING];


    CompanyMember* companyMember = (CompanyMember*) Member::getInstance();
    companyMember->getInfo(); //현재 companyMember의 companyName과 businessNumber 받아온다

    
    fprintf(out_fp, "3.1. 채용 정보 등록\n>");
    fscanf(in_fp, " %s %s %s", workField, numOfHire, deadline); //파일로부터 업무, 인원 수, 신청 마감일을 읽어봐서 반환

   
    vector<string> info;
    info.push_back(companyName);
    info.push_back(businessNumber);
    info.push_back(workField);
    info.push_back(numOfHire);
    info.push_back(deadline); // vector<string> info로 받은 값들을 리스트에 넣어서 채용 공고로 등록 시킨다.

    fprintf(out_fp, " %s %d %s", workField, &numOfHire, deadline);
    fprintf(out_fp, "\n"); // 받은 결과 값을 파일에 출력.
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
