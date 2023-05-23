/**
 * Project 채용 정보 시스템
 */


#ifndef _SIGNIN_H
#define _SIGNIN_H

class SignIn {
public: 
    
/**
 * @param signInInfo
 */
Boolean checkSignInAvailable(String signInInfo);
private: 
    MemberCollection memberCollection;
};

#endif //_SIGNIN_H