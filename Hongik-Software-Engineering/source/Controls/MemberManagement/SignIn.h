/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNIN_H
#define _SIGNIN_H

class SignInUI;
#include <vector>

class SignIn {
public:

	void start();

	bool doSignIn(vector<string> signInInfo);

	void setUI(SignInUI* ui);

private :
	SignInUI* ui;
};

#endif //_SIGNIN_H