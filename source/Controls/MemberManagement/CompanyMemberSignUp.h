/**
 * Project 채용 정보 시스템
 */


#ifndef _COMPANYMEMBERSIGNUP_H
#define _COMPANYMEMBERSIGNUP_H

#include "MemberSignUp.h"


class CompanyMemberSignUp: public MemberSignUp {
public: 
    
/**
 * @param signUpInfo
 */
Boolean checkAvailable(List[String] signUpInfo);
};

#endif //_COMPANYMEMBERSIGNUP_H