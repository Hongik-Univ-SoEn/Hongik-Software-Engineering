/**
 * Project 채용 정보 시스템
 */


#include "Apply.h"


vector<string> Apply::addApply(string businessNumber,IndividualMember* individualMEmber) {
    RecruitCollection* recruitCollection =this->recruitCollection;
    Recruit recruit =recruitCollection->findRecruitByBusinessNumber(businessNumber);
    recruit.addNumsOfApply();
    IndividualMember * individualMember = this->individualMember;
    individualMEmber->addToApplyList(recruit);
    vector<string> result ;
    result.push_back(recruit.getCompanyName());
    result.push_back(recruit.getBusinessNumber());
    result.push_back(recruit.getWorkField());
    return result;
}   

void Apply::setApplyUI(ApplyUI* applyUI){
    this->applyUI = applyUI;

}

void Apply::start(){
    ApplyUI* applyUI = this->applyUI;
    applyUI->startInterface();}