/**
 * Project 채용 정보 시스템
 */

#include "RecruitCollection.h"

RecruitCollection* RecruitCollection::recruitCollectionInstance = nullptr;

/*
    함수 이름 : RecruitCollection::getInstance
    기능      : 등록된 전체 Recruit를 가지고 있는 Singleton instance를 반환함
    전달 인자 : 없음
    반환값    : recruitCollectionInstance의 포인터 객체 
*/
RecruitCollection* RecruitCollection::getInstance() {
	if (recruitCollectionInstance == nullptr) {
		recruitCollectionInstance = new RecruitCollection();
	}
	return recruitCollectionInstance ;
}

/*
    함수 이름 : RecruitCollection::addRecruit
    기능      : RecruitCollection 객체가 vector 형태로 갖고 있는 Recurit에 새로운 Recruit을 추가.
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void RecruitCollection::addRecruit(Recruit* recruit) {
    this->recruit.push_back(recruit);
}

/*
    함수 이름 : RecruitCollection::findRecruitByCompanyName
    기능      : 특정 회사 이름을 갖고 있는 채용 정보를 찾고, 채용 정보의 상세 정보를 반환함.
    전달 인자 : string companyName(회사 이름)
    반환값    : vector<string> 타입의 정보. 정보는 회사이름, 업무, 지원자수, 마감일 정보, 사업자 번호순이다.
*/
vector<string> RecruitCollection::findRecruitByCompanyName(string companyName) {
    for(auto recruitment : recruit){
        if (!recruitment->getCompanyName().compare(companyName)){
            return recruitment->getRecruitInfo();
        }
    }
    return vector<string>();
}


/*
    함수 이름 : RecruitCollection::findRecruitByBusinessNumber
    기능      : 특정 사업자 번호를 갖고 있는 채용 정보를 찾아서 반환함.
    전달 인자 : string businessNumber(사업자 번호)
    반환값    : Recruit 클래스의 포인터 객체
*/
Recruit* RecruitCollection::findRecruitByBusinessNumber(string businessNumber) {
    for (auto recruitment : recruit) {
        if (!recruitment->getBusinessNumber().compare(businessNumber)) {
            return recruitment;
        }
    }
    return nullptr;
}  

/*
    함수 이름 : RecruitCollection::removeRecruit
    기능      : 특정 사업자 번호를 갖고 있는 채용 정보를 찾아서 삭제함.
    전달 인자 : string businessNumber(사업자 번호)
    반환값    : 삭제에 성공하면 true, 삭제하지 못하면 false
*/
bool RecruitCollection::removeRecruit(string businessNumber) {
    for (auto i = recruit.begin(); i != recruit.end(); i++) {
        if ((*i)->getBusinessNumber().compare(businessNumber)) {
            recruit.erase(i);
            return true;
        }
    }
    return false;
}

