/**
 * Project 채용 정보 시스템
 */


#include "SearchRecruitByCompanyName.h"
void SearchRecruitByCompanyName::setSearchRecruitByCompanyNameUI (SearchRecruitByCompanyNameUI* searchRecruitByCompanyNameUI )
{this->searchRecruitByCompanyNameUI = searchRecruitByCompanyNameUI;}
    
void SearchRecruitByCompanyName::start(){
    SearchRecruitByCompanyNameUI* temp = this->searchRecruitByCompanyNameUI;
    temp->startInterface();}

vector<string> SearchRecruitByCompanyName::getRecruitByCompanyName(string companyName) {
    RecruitCollection* recruitCollection =  this->recruitCollection;
    vector<string> info = recruitCollection->findRecruitByCompanyName(companyName);
    return info;
}

void SearchRecruitByCompanyName::setRecruitCollection(RecruitCollection* x){
    this->recruitCollection = x;
}