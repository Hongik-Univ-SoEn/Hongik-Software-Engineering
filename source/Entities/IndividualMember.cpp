
#include "Member.h"
#include <iostream>
#include <map>
using namespace std;


// string IndividualMember::getInfo() {
//     return "";
// }

<<<<<<< HEAD
// IndividualMember Member::createMember(string info) {
//     IndividualMember i = new IndividualMember();
//     return i
// }


// bool IndividualMember::checkDuplicated(string info) {
//     return true;
// }
=======
/**
 * @return string
 */
string IndividualMember::getInfo() {
    return " ";
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
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0


void IndividualMember::addToApplyList(Recruit apply) {
    this->recruitList.push_back(apply);
}

/*
	함수 이름 : IndividualMember::getRecruits()
	기능	   : recruits 반환 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
vector<Recruit> IndividualMember::getRecruits() {
    return this->recruits;
}

/*
	함수 이름 : IndividualMember::cancelApply(string businessNumber)
	기능	   : 지원 취소 기능 제공
	전달 인자 : string businessNumber
	반환값    : 없음
*/
void IndividualMember::cancelApply(string businessNumber) {
    for(int i = 0; i < recruits.size(); i++) {
        if(recruits[i].getBusinessNumber() == businessNumber) {
            recruits[i].setNumOfApply(recruits[i].getNumOfApply() - 1);
            recruits.erase(recruits.begin() + i);
            break;
        }
    }
}

/*
    함수 이름 : IndividualMember::analysis()
    기능	   : 지원한 채용 정보 분석 기능 제공
    전달 인자 : 없음
    반환값    : string
*/
string IndividualMember::analysis() {
    // 카운트 하기위한 map
    map<string,int> count;

    for(int i = 0; i < recruits.size(); i++) {
        if(count.find(recruits[i].getWorkField()) != count.end()) // 이미 존재하는 경우
            count[recruits[i].getWorkField()]++;
        else
            count.insert({recruits[i].getWorkField(),1});
    }

    string result = "> ";
    for(auto it = count.begin(); it != count.end(); it++) {
        result += it->first + " " + to_string(it->second) + "\n";
    }

    return result;

}