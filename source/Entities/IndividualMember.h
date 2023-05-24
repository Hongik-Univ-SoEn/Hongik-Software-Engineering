/**
 * Project 채용 정보 시스템
 */


#ifndef _INDIVIDUALMEMBER_H
#define _INDIVIDUALMEMBER_H

#include "Member.h"
<<<<<<< HEAD
#include<string>
#include<vector>
=======
#include <string>
using namespace std;
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0


class IndividualMember : public Member {
public: 
<<<<<<< HEAD
    
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
=======
        
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
        
    vector<Recruit> getRecruits();
        
    void cancelApply(string businessNumber);

    virtual string analysis();

private: 
        string name;
        string socialSecurityNumber;
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0
};

#endif //_INDIVIDUALMEMBER_H
