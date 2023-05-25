/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNOUT_H
#define _SIGNOUT_H

#include "../../Boundaries/MemberManagement/SignOutUI.h"

class SignOut {
public:

	void start();

	bool doSignOut();

	void setUI(SignOutUI* ui);

private:
	SignOutUI* ui;
};

#endif //_SIGNOUT_H