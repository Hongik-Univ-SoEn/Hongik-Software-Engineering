/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUITCOLLECTION_H
#define _RECRUITCOLLECTION_H

#include "Recruit.h"

class RecruitCollection {
public: 

    static RecruitCollection * getInstance();

    void addRecruit(Recruit* recruit);

    vector<string> findRecruitByCompanyName(string companyName);

    Recruit* findRecruitByBusinessNumber(string businessNumber);
    
    bool removeRecruit(string businessNumber);
private: 
    vector<Recruit*> recruit;
    static RecruitCollection* recruitCollectionInstance;
};

#endif //_RECRUITCOLLECTION_H