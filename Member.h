

#ifndef _MEMBER_H
#define _MEMBER_H
#include<string>
#include<vector>

#include "Recruit.h"

using namespace std;

class Member {
public: 
    
virtual Member createMember(string info) = 0;
    
virtual string getInfo() = 0;
    

virtual bool checkDuplicated(string info) = 0;
    

bool matchIDPW(string info);
    
void deleteMember();
    
vector<Recruit> getRecruits();
    
virtual string analysis() = 0;

protected: 
    string id;
    string pw;
    vector<Recruit*> recruits;
};

#endif //_MEMBER_H