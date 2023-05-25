/**
 * Project 채용 정보 시스템
 */


#include "ApplyInfo.h"
#include "../../Boundaries/RecruitmentInfo/ApplyInfoUI.h"
#include "../../Entities/IndividualMember.h"
#include "../../Entities/Member.h"
#include <iostream>
using namespace std;

/**
 * ApplyInfo implementation
 */


/*
  함수 이름 : ApplyInfo::applyInfo()
  기능	   : 출력을 위한 문자열 생성
  전달 인자 : 없음
  반환값    : string // 회사이름, 사업자번호, 업무, 
*/
string ApplyInfo::applyInfo(){
    string result = "";
    Member* member = Member::getInstance();
    
    vector<Recruit*> recruits = member->getRecruits();
    // 정보 가져오기
    for(int i = 0; i < recruits.size(); i++){
        vector<string> tmp = recruits[i]->getRecruitInfo();
        
        // getRecruitInfo --> 회사이름, 사업자번호, 업무, 신청마감일, 인원수, 지원자수
        string temp = "> " + tmp[0] + " " + tmp[1] + " " + tmp[2] + " " + tmp[4] + " " + tmp[3] + "\n";

        result += temp;
    }

    return result;
}
