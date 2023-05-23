/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBERSIGNUP_H
#define _MEMBERSIGNUP_H

class MemberSignUp {
public: 
    
/**
 * @param signUpInfo
 */
virtual Boolean checkAvailable(List[String] signUpInfo) = 0;
private: 
    MemberCollection memberCollection;
};

#endif //_MEMBERSIGNUP_H