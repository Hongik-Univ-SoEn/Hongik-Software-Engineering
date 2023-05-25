/**
 * Project 채용 정보 시스템
 */

#ifndef _APPLY_H
#define _APPLY_H

#include "../../Entities/IndividualMember.h"
#include "../../Entities/RecruitCollection.h"

///// 해당 클래스는 채용 즉시 지원 usecase에 사용되는 control class
//// RecruitCollection 객체를 참조함.
class Apply {
public:

	vector<string> addApply(string businessNumber, IndividualMember* individualMember); 

};

#endif //_APPLY_H