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

string CompanyMember::analysis() {
    // 카운트 하기위한 map
    map<string,int> count;

    for(int i = 0; i < recruits.size(); i++) {
        if(count.find(recruits[i].getWorkField()) != count.end()) // 이미 존재하는 경우
            count[recruits[i].getWorkField()] += recruits[i].getNumOfHire();
        else
            count.insert({recruits[i].getWorkField(), recruits[i].getNumOfHire()});
    }

    string result = "";
    for(auto it = count.begin(); it != count.end(); it++) {
        result += it->first + " " + to_string(it->second) + "\n";
    }
    return result;

}