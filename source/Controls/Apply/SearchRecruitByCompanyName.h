/**
 * Project 채용 정보 시스템
 */


#ifndef _SEARCHRECRUITBYCOMPANYNAME_H
#define _SEARCHRECRUITBYCOMPANYNAME_H

class SearchRecruitByCompanyName {
public: 
    
/**
 * @param companyName
 */
List[String] getRecruitByCompanyName(String companyName);
private: 
    RecruitCollection recruitCollection;
};

#endif //_SEARCHRECRUITBYCOMPANYNAME_H