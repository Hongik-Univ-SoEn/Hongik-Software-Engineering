/**
 * Project 채용 정보 시스템
 */

#include "RecruitCollection.h"

RecruitCollection* RecruitCollection::recruitCollectionInstance = nullptr;

RecruitCollection* RecruitCollection::getInstance() {
	if (recruitCollectionInstance == nullptr) {
		recruitCollectionInstance = new RecruitCollection();
	}
	return recruitCollectionInstance ;
}


void RecruitCollection::addRecruit(Recruit* recruit) {
    this->recruit.push_back(recruit);
}

/**
 * @param info
 * @return Recruit
 */
vector<string> RecruitCollection::findRecruitByCompanyName(string companyName) {
    for(auto recruitment : recruit){
        if (!recruitment->getCompanyName().compare(companyName)){
            return recruitment->getRecruitInfo();
        }
    }
    return vector<string>();
}


Recruit* RecruitCollection::findRecruitByBusinessNumber(string businessNumber) {
    for (auto recruitment : recruit) {
        if (!recruitment->getBusinessNumber().compare(businessNumber)) {
            return recruitment;
        }
    }
    return nullptr;
}
    

bool RecruitCollection::removeRecruit(string businessNumber) {
    for (auto i = recruit.begin(); i != recruit.end(); i++) {
        if ((*i)->getBusinessNumber().compare(businessNumber)) {
            recruit.erase(i);
            return true;
        }
    }
    return false;
}

