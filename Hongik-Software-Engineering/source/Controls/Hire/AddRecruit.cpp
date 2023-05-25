/**
 * Project 채용 정보 시스템
 */


#include "AddRecruit.h"
#include "./../../Entities/RecruitCollection.h"
#include "./../../Entities/CompanyMember.h"

using namespace std;
/**
 * AddRecruit implementation
 */

Recruit* AddRecruit::addRecruit(vector<string> info) {
   
    //recruit에 createRecruit(info) 값을 넣고
    Recruit* recruit = Recruit::createRecruit(info);
    //RecruitCollection 에 방금 만들어진 채용 공고를 넣어준다
    RecruitCollection::getInstance()->addRecruit(recruit);
    //회사회원이 만든 채용 공고 리스트에 추가
    ((CompanyMember*)Member::getInstance())->addToRecruitList(recruit);

    return recruit;
}
