/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBERSIGNUP_H
#define _MEMBERSIGNUP_H

#include <vector>
#include <string>
using namespace std;

class MemberSignUp {
public:

	virtual bool doSignUp(vector<string> signUpInfo) = 0;

};

#endif //_MEMBERSIGNUP_H