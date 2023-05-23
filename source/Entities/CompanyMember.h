/**
 * Project 채용 정보 시스템
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"


class CompanyMember: public Member {
public: 
    
String getInfo();
    
/**
 * @param info
 */
CompanyMember createMember(String info);
    
/**
 * @param info
 */
Boolean checkDuplicated(String info);
    
/**
 * @param addRecruit
 */
void addToRecruitList(Recruit addRecruit);
private: 
    String companyName;
    String businessNumber;
};

#endif //_COMPANYMEMBER_H