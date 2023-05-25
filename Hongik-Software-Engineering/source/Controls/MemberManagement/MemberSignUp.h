/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBERSIGNUP_H
#define _MEMBERSIGNUP_H

#include "../../Entities/MemberCollection.h"
#include "../../Boundaries/MemberManagement/MemberSignUpUI.h"

class MemberSignUp {
public:

	virtual bool doSignUp(vector<string> signUpInfo);

	virtual void start();

	int getType();

	void setUI(MemberSignUpUI* ui);

protected:
	MemberSignUpUI* ui;
};

#endif //_MEMBERSIGNUP_H