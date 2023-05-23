/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUITCOLLECTION_H
#define _RECRUITCOLLECTION_H

class RecruitCollection {
public: 
    
void addRecruit();
    
/**
 * @param info
 */
Recruit findRecruit(String info);
    
void removeRecruit();
private: 
    vector<Recruit> recruit;
};

#endif //_RECRUITCOLLECTION_H