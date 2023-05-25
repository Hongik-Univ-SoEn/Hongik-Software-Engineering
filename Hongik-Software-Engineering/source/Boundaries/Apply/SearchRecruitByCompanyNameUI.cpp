/**
 * Project 채용 정보 시스템
 */

#include "SearchRecruitByCompanyNameUI.h"
// #include <iostream>



void SearchRecruitByCompanyNameUI::setControl(SearchRecruitByCompanyName* searchRecruitByCompanyName){
    this->searchRecruitByCompanyName = searchRecruitByCompanyName; //// control 객체를 참조할 수 있도록 속성에 set함.
}


void SearchRecruitByCompanyNameUI::startInterface() {
    char companyName[MAX_STRING] ;
    fprintf(out_fp, "4.1. 채용 정보 검색\n>");
    fscanf(in_fp, "%s", companyName); /// input 파일로부터 회사 이름을 받아옴.

    SearchRecruitByCompanyName* temp =  this->searchRecruitByCompanyName; /// control class 객체를 참조
    vector<string> result = temp->getRecruitByCompanyName(companyName);  // control class 객체의 getRecruitByCompanyName 함수 호출.

    for (auto str : result) {
        fprintf(out_fp, " %s", str); ///// control 객체로부터 반환 받은 결과 값을 file에 차례대로 출력함.
    }
    fprintf(out_fp, "\n\n");


}

