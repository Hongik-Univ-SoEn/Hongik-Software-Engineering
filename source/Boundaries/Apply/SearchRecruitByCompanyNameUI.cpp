/**
 * Project 채용 정보 시스템
 */

#include<iostream>
#include<string>
#include <SearchRecruitByCompanyNameUI.h>

using namespace std;

void SearchRecruitByCompanyNameUI::searchRecruitByCompany(string companyName) {
    SearchRecruitByCompanyName* temp =  this->searchRecruitByCompanyName;
    vector<string> recruitInfo = temp->getRecruitByCompanyName(companyName);
    int len = recruitInfo.size();
    for (int i=0;i<len;i++) {
        cout<<recruitInfo[i]<< endl;
    }
}

void SearchRecruitByCompanyNameUI::setSearchRecruitByCompanyName(SearchRecruitByCompanyName* searchRecruitByCompanyName){
    this->searchRecruitByCompanyName = searchRecruitByCompanyName;
}

void SearchRecruitByCompanyNameUI::startInterface() {

}

