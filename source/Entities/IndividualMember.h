/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBER_H
#define _INDIVIDUALMEMBER_H

#include "Member.h"
#include<string>
#include<vector>


class IndividualMember : public Member {
public: 
    
    // string getInfo();
    

    // virtual IndividualMember createMember(string info);

    // bool checkDuplicated(string info);
    

    void addToApplyList(Recruit apply);

    void getRecruit();

    void cancelApply();
private: 
    string name;
    string socialSecurityNumber;
    vector<Recruit> recruitList;
};

#endif //_INDIVIDUALMEMBER_H