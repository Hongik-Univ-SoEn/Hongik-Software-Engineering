/**
 * Project 채용 정보 시스템
 */

#include "SearchRecruitByCompanyNameUI.h"
// #include <iostream>

/*
    함수 이름 : SearchRecruitByCompanyNameUI::setControl
    기능     : 외부에서 SearchRecruitByCompanyName(control class)의 포인터 객체를 전달 받아, SearchRecruitByCompanyNameUI(boundary class)가 SearchRecruitByCompanyName(Control class)를 참조하도록 속성값으로 저장.
    전달 인자 : SearchRecruitByCompanyName class의 포인터 객체
    반환값    : 없음.
*/

void SearchRecruitByCompanyNameUI::setControl(SearchRecruitByCompanyName* searchRecruitByCompanyName){
    this->searchRecruitByCompanyName = searchRecruitByCompanyName; //// control 객체를 참조할 수 있도록 속성에 set함.
}


/*
    함수 이름 : SearchRecruitByCompanyNameUI::startInterface()
    기능   : SearchRecruitByCompanyName(control class)를 참조하여 함수를 호출하여 특정 회사 이름을 갖고 있는 채용 정보의 세부 정보(회사이름, 사업자번호, 업무, 마감일, 인원수)를 반환받고, 이를 파일에 출력함.
    전달 인자 : 없음.
    반환값   : 없음.
*/

void SearchRecruitByCompanyNameUI::startInterface() {
    char companyName[MAX_STRING] ;
    fprintf(out_fp, "4.1. 채용 정보 검색\n>");
    fscanf(in_fp, "%s", companyName); /// input 파일로부터 회사 이름을 받아옴.

    SearchRecruitByCompanyName* temp =  this->searchRecruitByCompanyName; /// control class 객체를 참조
    vector<string> result = temp->getRecruitByCompanyName(companyName);  // control class 객체의 getRecruitByCompanyName 함수 호출.

    for (auto str : result) {
        fprintf(out_fp, " %s", str.c_str()); ///// control 객체로부터 반환 받은 결과 값을 file에 차례대로 출력함.
    }
    fprintf(out_fp, "\n\n");


}

