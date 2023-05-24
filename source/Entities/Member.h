/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBER_H
#define _MEMBER_H
#include<string>
#include<vector>
#include<Recruit.h>
using namespace std;

class Member {
public: 
    

// virtual Member createMember(string info) = 0;
    
// virtual string getInfo() = 0;
    

// virtual bool checkDuplicated(string info) = 0;
    

// bool matchIDPW(string info);
    
void deleteMember();
vector<Recruit> getRecruits();
    
void analysis();
private: 
    string id;
    string pw;
    vector<Recruit> recruits;
};

#endif //_MEMBER_H