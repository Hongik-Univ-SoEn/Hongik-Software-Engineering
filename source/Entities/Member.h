/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBER_H
#define _MEMBER_H
#include "Recruit.h"
#include <vector>
using namespace std;

class Member {
public: 
    
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
    vector<Recruit> recruits;
};

#endif //_MEMBER_H