/**
 * Project 채용 정보 시스템
 */


#include "AddRecruit.h"
#include "./../../Entities/RecruitCollection.h"
#include "./../../Entities/CompanyMember.h"

using namespace std;
/*
    함수 이름 : AddRecruit::addRecruit
    기능   : 특정 회사회원이 등록하고자 하는 채용 정보를 받아와서 채용 정보를 등록시켜준다. 그리고 그 회사회원이 등록한 채용 정보 리스트에 추가.
    전달 인자 : vector<string> info
    반환값    : recruit, vector<string>타입으로 반환되며, 내용은 회사이름, 사업자번호, 업무, 인원 수, 신청 마감일이다.
*/
Recruit* AddRecruit::addRecruit(vector<string> info) {
   
    Recruit* recruit = Recruit::createRecruit(info);
    RecruitCollection::getInstance()->addRecruit(recruit);
    ((CompanyMember*)Member::getInstance())->addToRecruitList(recruit);

    return recruit;
}
