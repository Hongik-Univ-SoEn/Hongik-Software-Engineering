/**
 * Project 채용 정보 시스템
 */

#include "Apply.h"

vector<string> Apply::addApply(string businessNumber, IndividualMember* individualMember) {
	Recruit* recruit = recruitCollection->findRecruitByBusinessNumber(businessNumber);
	recruit->setNumsOfApply(recruit->getNumsOfApply() + 1);
	individualMember->addToApplyList(recruit);

	vector<string> result;
	result.push_back(recruit->getCompanyName());
	result.push_back(recruit->getBusinessNumber());
	result.push_back(recruit->getWorkField());
	return result;
}

void Apply::setRecruitCollection(RecruitCollection* recruitCollection) {
	this->recruitCollection = recruitCollection;
}

void Apply::setApplyUI(ApplyUI* applyUI) {
	this->applyUI = applyUI;
}

void Apply::start() {
	ApplyUI* applyUI = this->applyUI;
	applyUI->startInterface();
}