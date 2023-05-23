/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBERSIGNUP_H
#define _INDIVIDUALMEMBERSIGNUP_H

#include "MemberSignUp.h"


class IndividualMemberSignUp: public MemberSignUp {
public: 
    
/**
 * @param signUpInfo
 */
Boolean checkAvailable(List[String] signUpInfo);
};

#endif //_INDIVIDUALMEMBERSIGNUP_H