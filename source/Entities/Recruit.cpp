/**
 * Project 채용 정보 시스템
 */


#include "Recruit.h"

/**
 * Recruit implementation
 */


/**
 * @return String
 */
string Recruit::getDetailInfo() {
    return "";
}

/**
 * @param num
 */
void Recruit::addNumsOfApply() {
    int num = this->numsOfApply ;
    num = num+1;
    this->numsOfApply = num;
}

/**
 * @param info
 * @return void
 */
void Recruit::createRecruit(string info) {
    return;
}


vector<string>Recruit::getRecruitInfo() {
    vector<string> info;
    info.push_back(this->companyName);
    info.push_back(this->businessNumber);
    info.push_back(this->workField);
    info.push_back(this->deadline);
    info.push_back(to_string(this->numOfHire)) ;
    return info;
}

string  Recruit::getWorkField(){return this->workField;}
int  Recruit::getNumOfHire(){return this->numOfHire;}
string  Recruit::getDeadline(){return this->deadline;}
int  Recruit::getNumsOfApply(){return this->numsOfApply;}
string Recruit::getCompanyName(){ return this->companyName;}
string Recruit::getBusinessNumber(){return this->businessNumber;}