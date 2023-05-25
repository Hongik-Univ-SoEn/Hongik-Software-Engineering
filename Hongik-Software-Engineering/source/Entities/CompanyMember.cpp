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

/**
 * @return string
 */
vector<string> CompanyMember::getInfo() {
    auto v = vector<string>();
    v.push_back(companyName);
    v.push_back(businessNumber);
    return v;
}

/**
 * @param info
 * @return CompanyMember
 */
CompanyMember* CompanyMember::createMember(vector<string> info) {
    auto mem = new CompanyMember(info[0], info[1], info[2], info[3]);
    return mem;
}

/**
 * @param info
 * @return bool
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
	반환값    : string 
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

void CompanyMember::addToRecruitList(Recruit* recruit) {
    recruits.push_back(recruit);
}