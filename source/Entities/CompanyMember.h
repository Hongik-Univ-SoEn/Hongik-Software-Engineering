/**
 * Project 채용 정보 시스템
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"


class CompanyMember: public Member {
public: 
    
    string getInfo();
        
    /**
     * @param info
     */
    CompanyMember createMember(string info);
        
    /**
     * @param info
     */
    Boolean checkDuplicated(string info);
        
    /**
     * @param addRecruit
     */
    void addToRecruitList(Recruit addRecruit);

    virtual string analysis();
private: 
    string companyName;
    string businessNumber;
};

#endif //_COMPANYMEMBER_H