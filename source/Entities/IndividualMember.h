/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBER_H
#define _INDIVIDUALMEMBER_H

#include "Member.h"
#include <string>
using namespace std;


class IndividualMember: public Member {
public: 
        
    string getInfo();
        
    /**
     * @param info
     */
    IndividualMember createMember(string info);
        
    /**
     * @param info
     */
    bool checkDuplicated(string info);
        
    /**
     * @param apply
     */
    void addToApplyList(Recruit apply);
        
    void getRecruit();
        
    void cancelApply();

    virtual string analysis();

private: 
        string name;
        string socialSecurityNumber;
};

#endif //_INDIVIDUALMEMBER_H
