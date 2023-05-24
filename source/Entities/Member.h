/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBER_H
#define _MEMBER_H
<<<<<<< HEAD
#include<string>
#include<vector>
#include<Recruit.h>
=======
#include "Recruit.h"
#include <vector>
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0
using namespace std;

class Member {
public: 
    
<<<<<<< HEAD

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
=======
/**
 * @param info
 */
virtual Member createMember(string info) = 0;
    
virtual string getInfo() = 0;
    
/**
 * @param info
 */
virtual Boolean checkDuplicated(string info) = 0;
    
/**
 * @param info
 */
Boolean matchIDPW(string info);
    
void deleteMember();
    
vector<Recruit> getRecruits();
    
virtual string analysis() = 0;

protected: 
    String id;
    String pw;
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0
    vector<Recruit> recruits;
};

#endif //_MEMBER_H