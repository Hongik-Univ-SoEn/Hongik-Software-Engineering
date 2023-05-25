/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNINUI_H
#define _SIGNINUI_H

class SignIn;
class UIClass;
#include "../../../UIClass.h"

using namespace std;

class SignInUI :public UIClass {
public:

	void startInterface();

	void setControl(SignIn* control);
private :
	SignIn* control;
};

#endif //_SIGNINUI_H