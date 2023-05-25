/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBERSIGNUPUI_H
#define _MEMBERSIGNUPUI_H

#include "../../../UIClass.h"
#include "../../Controls/MemberManagement/MemberSignUp.h"

class MemberSignUpUI : public UIClass {
public:

	int typeOfSignUp();

	virtual void startInterface();
	
	void setControl(MemberSignUp* control);

protected :
	MemberSignUp* control;
};

#endif //_MEMBERSIGNUPUI_H