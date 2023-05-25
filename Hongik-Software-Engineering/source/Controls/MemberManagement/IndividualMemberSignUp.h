/**
 * Project 채용 정보 시스템
 */

#ifndef _INDIVIDUALMEMBERSIGNUP_H
#define _INDIVIDUALMEMBERSIGNUP_H

#include "MemberSignUp.h"

class IndividualMemberSignUp : public MemberSignUp {
public:

	bool doSignUp(vector<string> signUpInfo);
	void start();
};

#endif //_INDIVIDUALMEMBERSIGNUP_H