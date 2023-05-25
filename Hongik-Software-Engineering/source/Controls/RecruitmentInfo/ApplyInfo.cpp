/**
 * Project 채용 정보 시스템
 */


#include "ApplyInfo.h"
#include "../../Boundaries/RecruitmentInfo/ApplyInfoUI.h"
#include "../../Entities/IndividualMember.h"
#include <iostream>
using namespace std;

/**
 * ApplyInfo implementation
 */

/*
	함수 이름 : ApplyInfo::cancelApply()
	기능	   : 지원 취소 기능 제공
	전달 인자 : string businessNumber
	반환값    : 없음
*/
void ApplyInfo::cancelApply(string businessNumber) {
    IndividualMember *im = (IndividualMember *)member;
    im->cancelApply(businessNumber);

    string result = makestringForPrint();
    applyInfoUI->startInterface(result);
}

/*
  함수 이름 : ApplyInfo::ApplyInfo(Member *member)
  기능	   : ApplyInfo의 생성자
  전달 인자 : Member *member
  반환값    : 없음
*/
ApplyInfo::ApplyInfo(Member *member) : member(member){
    applyInfoUI = new ApplyInfoUI(this);

    string result = makestringForPrint();
    applyInfoUI->startInterface(result);
}

/*
  함수 이름 : ApplyInfo::makestringForPrint()
  기능	   : 출력을 위한 문자열 생성
  전달 인자 : 없음
  반환값    : string
*/
string ApplyInfo::makestringForPrint(){
    string result = "> ";
    
    vector<Recruit> recruits = member->getRecruits();
    // 정보 가져오기
    for(int i = 0; i < recruits.size(); i++){
        result += recruits[i].getDetailInfo() + "\n";
    }

    return result;
}