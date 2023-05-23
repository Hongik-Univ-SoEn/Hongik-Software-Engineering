/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBER_H
#define _INDIVIDUALMEMBER_H

#include "Member.h"


class IndividualMember: public Member {
public: 
    
String getInfo();
    
/**
 * @param info
 */
IndividualMember createMember(String info);
    
/**
 * @param info
 */
Boolean checkDuplicated(String info);
    
/**
 * @param apply
 */
void addToApplyList(Recruit apply);
    
void getRecruit();
    
void cancelApply();
private: 
    String name;
    String socialSecurityNumber;
};

#endif //_INDIVIDUALMEMBER_H