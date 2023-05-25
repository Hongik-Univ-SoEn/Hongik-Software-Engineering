/**
 * Project 채용 정보 시스템
 */


#include "CompanyMember.h"
#include <map>

/**
 * CompanyMember implementation
 */

CompanyMember::CompanyMember() {
    id = "";
    pw = "";
    companyName = "";
    businessNumber = "";
}

CompanyMember::CompanyMember(string id, string pw, string companyName, string businessNumber) {
    this->id = id;
    this->pw = pw;
    this->companyName = companyName;
    this->businessNumber = businessNumber;
}

/*
    함수 이름 : CompanyMember::getInfo
    기능	  : 객체의 정보(회사이름, 사업자번호)를 반환
    전달 인자 : 없음
    반환값    : 회사이름과 사업자번호가 순서대로 담긴 vector<string>
*/
vector<string> CompanyMember::getInfo() {
    auto v = vector<string>();
    v.push_back(companyName);
    v.push_back(businessNumber);
    return v;
}

/*
    함수 이름 : CompanyMember::createMember
    기능	  : 새로운 CompanyMember 객체를 생성
    전달 인자 : ID, PW, 회사이름, 사업자번호가 순서대로 담긴 vector<string>
    반환값    : 생성된 CompanyMember 객체의 포인터
*/
CompanyMember* CompanyMember::createMember(vector<string> info) {
    auto mem = new CompanyMember(info[0], info[1], info[2], info[3]);
    mem->recruits = vector<Recruit*>();
    return mem;
}

/*
    함수 이름 : CompanyMember::checkDuplicated
    기능	  : 객체가 가진 정보가 주어진 정보와 일치하는지 검사
    전달 인자 : 비교할 회사이름(string companyName)과 사업자번호(string businessNumber)
    반환값    : 주어진 인자와 객체가 동일한 정보를 가졌다면 true, 그렇지 않다면 false
*/
bool CompanyMember::checkDuplicated(string companyName, string businessNumber) {
    if (!this->companyName.compare(companyName) && !this->businessNumber.compare(businessNumber)) {
        return true;
    } else {
        return false;
    }
}

/*
	함수 이름 : CompanyMember::analysis()
	기능	  : 회사별 채용 통계 분석 기능 제공
	전달 인자 : 없음
	반환값    : 출력용 string 
*/
string CompanyMember::analysis() {
    // 카운트 하기위한 map
    map<string,int> count;

    for (auto recruit : recruits) {
        if (count.find(recruit->getWorkField()) != count.end()) { // 이미 존재하는 경우
            count[recruit->getWorkField()] += recruit->getNumsOfApply();
        } else {
            count.insert({ recruit->getWorkField(), recruit->getNumsOfApply()});
        }
    }

    string result = "> ";
    for(auto it = count.begin(); it != count.end(); it++) {
        result += it->first + " " + to_string(it->second) + "\n";
    }
    return result;

}

/*
    함수 이름 : CompanyMember::addToApplyList
    기능      : 회사 회원이 등록한 채용 정보에 새로운 채용 정보를 추가함.
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void CompanyMember::addToRecruitList(Recruit* recruit) {
    recruits.push_back(recruit);
}