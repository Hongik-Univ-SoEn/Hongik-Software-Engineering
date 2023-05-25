/**
 * Project 채용 정보 시스템
 */

#ifndef _SEARCHRECRUITBYCOMPANYNAME_H
#define _SEARCHRECRUITBYCOMPANYNAME_H
#include "../../Entities/RecruitCollection.h"
using namespace std;


///// 해당 클래스는 회사 이름으로 검색했을 때의 채용 정보 리스트를 반환하기 위해 사용되는 control class
//// RecruitCollection 객체를 참조함.
class SearchRecruitByCompanyName {
public: 
   
   

    vector<string> getRecruitByCompanyName(string companyName);
  

private: 

    RecruitCollection* recruitCollection;

   
};

#endif //_SEARCHRECRUITBYCOMPANYNAME_H