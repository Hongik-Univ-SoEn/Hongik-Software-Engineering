/**
 * Project 채용 정보 시스템
 */


#include "Member.h"
#include <iostream>
#include <map>
using namespace std;

/**
 * IndividualMember implementation
 */


/**
 * @return String
 */
string IndividualMember::getInfo() {
    return "";
}

/**
 * @param info
 * @return IndividualMember
 */
IndividualMember IndividualMember::createMember(string info) {
    return null;
}

/**
 * @param info
 * @return Boolean
 */
Boolean IndividualMember::checkDuplicated(string info) {
    return null;
}

/**
 * @param apply
 */
void IndividualMember::addToApplyList(Recruit apply) {

}

void IndividualMember::getRecruit() {

}

void IndividualMember::cancelApply() {

}

string IndividualMember::analysis() {
    // 카운트 하기위한 map
    map<string,int> count;

    for(int i = 0; i < recruits.size(); i++) {
        if(count.find(recruits[i].getWorkField()) != count.end()) // 이미 존재하는 경우
            count[recruits[i].getWorkField()]++;
        else
            count.insert({recruits[i].getWorkField(),1});
    }

    string forReturn = "";
    for(auto it = count.begin(); it != count.end(); it++) {
        forReturn += it->first + " " + to_string(it->second) + "\n";
    }

    return forReturn;

}