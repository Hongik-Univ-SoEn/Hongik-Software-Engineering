/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNOUTUI_H
#define _SIGNOUTUI_H

class SignOut;
class UIClass;
#include "../../../UIClass.h"

class SignOutUI : public UIClass {
public:

	void startInterface();

	void setControl(SignOut* control);
private:
	SignOut* control;
};

#endif //_SIGNOUTUI_H