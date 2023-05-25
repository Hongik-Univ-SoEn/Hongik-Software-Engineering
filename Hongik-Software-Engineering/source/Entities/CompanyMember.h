/**
 * Project 채용 정보 시스템
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"

class CompanyMember: public Member {
public: 

    CompanyMember();
    
    CompanyMember(string id, string pw, string name, string socialSecurityNumber);

    vector<string> getInfo() override;

    static CompanyMember* createMember(vector<string> info);
       
    bool checkDuplicated(string companyName, string businessNumber) override;
       
    void addToRecruitList(Recruit* recruit);

    string analysis() override;

private: 
    string companyName;
    string businessNumber;
};

#endif //_COMPANYMEMBER_H