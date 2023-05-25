/**
 * Project 채용 정보 시스템
 */


#include "../../Boundaries/RecruitmentInfo/ApplyInfoUI.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * ApplyInfoUI implementation
 */

/*
	함수 이름 : ApplyInfoUI::startInterface()
	기능	   : 출력 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplyInfoUI::startInterface() {
    fprintf(out_fp, "4.3. 지원 정보 조회\n");

	string result = control->applyInfo();
	fprintf(out_fp, result.c_str());

    fprintf(out_fp, "\n");
}

/*
  함수 이름 : ApplyInfoUI::setControl(ApplyInfo* control)
  기능	    : control setter function
  전달 인자 : ApplyInfo* control 
  반환값    : 없음
*/


void ApplyInfoUI::setControl(ApplyInfo* control) {
	this->control = control;
}