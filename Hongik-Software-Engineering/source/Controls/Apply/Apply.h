/**
 * Project 채용 정보 시스템
 */

#ifndef _APPLY_H
#define _APPLY_H

#include "../../Entities/IndividualMember.h"
#include "../../Entities/RecruitCollection.h"
#include "../../Boundaries/Apply/ApplyUI.h"

class Apply {
public:

	vector<string> addApply(string businessNumber, IndividualMember* individualMember);

	void setRecruitCollection(RecruitCollection* recruitCollection);

	void setApplyUI(ApplyUI* applyUI);

	void start();

private:
	RecruitCollection* recruitCollection;
	ApplyUI* applyUI;
};

#endif //_APPLY_H