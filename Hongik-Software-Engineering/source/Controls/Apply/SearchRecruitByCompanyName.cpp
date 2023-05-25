/**
 * Project 채용 정보 시스템
 */


#include "SearchRecruitByCompanyName.h"


vector<string> SearchRecruitByCompanyName::getRecruitByCompanyName(string companyName) {
  
    vector<string> info = RecruitCollection::getInstance()->findRecruitByCompanyName(companyName); 
    /// RecruitCollection 객체로부터 회사 이름을 파라미터로 넘겨주는 함수를 호출해서, 해당 회사 이름을 갖고 있는 채용의 정보 리스트(회사이름, 사업자번호, 직무, 마감일, 인원수)를 전달받음.
    return info; //// boundary 객체에 반환.
}

