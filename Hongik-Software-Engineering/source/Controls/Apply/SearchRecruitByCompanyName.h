/**
 * Project 채용 정보 시스템
 */

#ifndef _SEARCHRECRUITBYCOMPANYNAME_H
#define _SEARCHRECRUITBYCOMPANYNAME_H
#include "../../Entities/RecruitCollection.h"
#include "../../Boundaries/Apply/SearchRecruitByCompanyNameUI.h"
using namespace std;

class SearchRecruitByCompanyName {
public: 
   
    void start();

    vector<string> getRecruitByCompanyName(string companyName);

    void setSearchRecruitByCompanyNameUI (SearchRecruitByCompanyNameUI* searchRecruitByCompanyNameUI );

    void setRecruitCollection(RecruitCollection* RecruitCollection);

private: 

    RecruitCollection* recruitCollection;

    SearchRecruitByCompanyNameUI* searchRecruitByCompanyNameUI ;

};

#endif //_SEARCHRECRUITBYCOMPANYNAME_H