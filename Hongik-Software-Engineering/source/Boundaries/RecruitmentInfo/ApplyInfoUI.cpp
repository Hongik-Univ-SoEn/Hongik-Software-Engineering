/**
 * Project 채용 정보 시스템
 */


#include "ApplyInfoUI.h"
#include <iostream>
using namespace std;

/**
 * ApplyInfoUI implementation
 */

/*
	함수 이름 : ApplyInfoUI::startInterface(string print)
	기능	   : 출력 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplyInfoUI::startInterface(string print) {
    cout << print << endl;
}

/*
  함수 이름 : ApplyInfoUI::selectCancel(string businessNumber)
  기능	   : 지원 취소 기능 제공
  전달 인자 : string businessNumber
  반환값    : 없음
*/
void ApplyInfoUI::selectCancel(string businessNumber) {
    applyInfo->cancelApply(businessNumber);
}

/*
  함수 이름 : ApplyInfoUI::ApplyInfoUI(ApplyInfo *applyInfo)
  기능	   : 생성자
  전달 인자 : ApplyInfo *applyInfo
  반환값    : 없음
*/
ApplyInfoUI::ApplyInfoUI(ApplyInfo *applyInfo) {
    this->applyInfo = applyInfo;
}