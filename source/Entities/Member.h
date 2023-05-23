/**
 * Project 채용 정보 시스템
 */


#ifndef _MEMBER_H
#define _MEMBER_H

class Member {
public: 
    
/**
 * @param info
 */
virtual Member createMember(String info) = 0;
    
virtual String getInfo() = 0;
    
/**
 * @param info
 */
virtual Boolean checkDuplicated(String info) = 0;
    
/**
 * @param info
 */
Boolean matchIDPW(String info);
    
void deleteMember();
    
List[Recruit] getRecruits();
    
void analysis();
private: 
    String id;
    String pw;
    vector<Recruit> recruits;
};

#endif //_MEMBER_H