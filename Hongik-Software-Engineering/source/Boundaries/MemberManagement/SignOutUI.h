/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNOUTUI_H
#define _SIGNOUTUI_H

#include "../../Controls/MemberManagement/SignOut.h"
#include "../../../UIClass.h"

class SignOutUI : public UIClass {
public:

	void startInterface();

	void setControl(SignOut* control);
private:
	SignOut* control;
};

#endif //_SIGNOUTUI_H