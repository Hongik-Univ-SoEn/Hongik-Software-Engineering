

#ifndef _MEMBERCOLLECTION_H
#define _MEMBERCOLLECTION_H
#include<string>
#include<Member.h>
using namespace std;
class MemberCollection {
public: 
    
    void addMember();
    
    Member findMember(string info);
    
    void removeMember();
private: 
   Member* member;
};

#endif //_MEMBERCOLLECTION_H