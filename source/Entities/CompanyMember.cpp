/**
 * Project 채용 정보 시스템
 */


#include "CompanyMember.h"
#include <map>
#include <iostream>
using namespace std;

/**
 * CompanyMember implementation
 */


/**
 * @return string
 */
string CompanyMember::getInfo() {
    return "";
}

/**
 * @param info
 * @return CompanyMember
 */
CompanyMember CompanyMember::createMember(string info) {
    return null;
}

/**
 * @param info
 * @return Boolean
 */
Boolean CompanyMember::checkDuplicated(string info) {
    return null;
}

/**
 * @param addRecruit
 */
void CompanyMember::addToRecruitList(Recruit addRecruit) {

}


/*
	함수 이름 : CompanyMember::analysis()
	기능	   : 회사별 채용 통계 분석 기능 제공
	전달 인자 : 없음
	반환값    : string
*/
string CompanyMember::analysis() {
    // 카운트 하기위한 map
    map<string,int> count;

    for(int i = 0; i < recruits.size(); i++) {
        if(count.find(recruits[i].getWorkField()) != count.end()) // 이미 존재하는 경우
            count[recruits[i].getWorkField()] += recruits[i].getNumOfApply();
        else
            count.insert({recruits[i].getWorkField(), recruits[i].getNumOfApply()});
    }

    string result = "> ";
    for(auto it = count.begin(); it != count.end(); it++) {
        result += it->first + " " + to_string(it->second) + "\n";
    }
    return result;

}