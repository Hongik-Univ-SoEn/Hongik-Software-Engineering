

#ifndef _SEARCHRECRUITBYCOMPANYNAMEUI_H
#define _SEARCHRECRUITBYCOMPANYNAMEUI_H

#include<iostream>
#include<fstream>
#include<string>
#include"SearchRecruitByCompanyName.h"
#include<vector>
using namespace std;

class SearchRecruitByCompanyNameUI {
public: 
    

    void searchRecruitByCompany(string companyName);
    void setSearchRecruitByCompanyName(SearchRecruitByCompanyName* x);
    void startInterface();
private:
    SearchRecruitByCompanyName* searchRecruitByCompanyName;

};

#endif 


////SearchRecruitByCompanyName을 갖고 있어야 함.
///SearchRecruitByCompanyName은 RecruitCollection을 갖고 있어야 함.
///RecruitCollection은 Recruit을 갖고 있어야 함.

//이 기능이 불릴 때, 가장 먼저 SearchRecruitCompanyName(컨트롤)객체를 생성하고, 이미 생성되어 있는 RecruitCollection을 SearchRecruitCompanyName(컨트롤)객체에 setting.
// SearchRecruitCompanyNameUI(바운더리)객체를 생성하고, 미리 생성된 SearchRecruitCompanyName(컨트롤) 객체를 setting.
// 그리고나서 SearchRecruitByCompanyName의 searchRecruitByComapny를 호출

