/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBER_H
#define _INDIVIDUALMEMBER_H

#include "Member.h"

class IndividualMember : public Member {
public: 
    
    IndividualMember();

    IndividualMember(string id, string pw, string name, string socialSecurityNumber);

    static Member* getInstance();

    vector<string> getInfo() override;

    static IndividualMember* createMember(vector<string> info);

    bool checkDuplicated(string name, string socialSecurityNumber) override;

    void addToApplyList(Recruit* recruit);

    void cancelApply(string businessNumber);

    string analysis();

private: 
    string name;
    string socialSecurityNumber;
};

#endif //_INDIVIDUALMEMBER_H