/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBERCOLLECTION_H
#define _MEMBERCOLLECTION_H

class MemberCollection {
public: 
    
void addMember();
    
/**
 * @param info
 */
Member findMember(String info);
    
void removeMember();
private: 
    vector<Member> member;
};

#endif //_MEMBERCOLLECTION_H