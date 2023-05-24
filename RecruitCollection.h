/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUITCOLLECTION_H
#define _RECRUITCOLLECTION_H
#include<Recruit.h>
#include<vector>
using namespace std;
class RecruitCollection {
public: 
  
    void addRecruit();

    void setRecruit(Recruit* recruit);

    vector<string> findRecruitByCompanyName(string companyName);
    Recruit* findRecruitByBusinessNumber(string businessNumber);
    
    void removeRecruit();
private: 
    vector<Recruit*> recruit;
};

#endif //_RECRUITCOLLECTION_H