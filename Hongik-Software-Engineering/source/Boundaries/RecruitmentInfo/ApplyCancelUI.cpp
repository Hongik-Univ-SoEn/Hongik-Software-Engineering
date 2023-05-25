/**
 * Project 채용 정보 시스템
 */


#include "ApplyCancelUI.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * ApplyInfoUI implementation
 */

 /*
	 함수 이름 : ApplyCancelUI::startInterface()
	 기능	   : 출력 기능 제공
	 전달 인자 : 없음
	 반환값    : 없음
 */
void ApplyCancelUI::startInterface() {
	char businessNumber[MAX_STRING];
	fscanf(in_fp, "%s", &businessNumber);

	fprintf(out_fp, "4.4. 지원 취소\n> ");

	string result = control->cancelApply(businessNumber);
	fprintf(out_fp, result.c_str());

	fprintf(out_fp, "\n");
}

/*
  함수 이름 : ApplyInfoUI::selectCancel(string businessNumber)
  기능	   : 지원 취소 기능 제공
  전달 인자 : string businessNumber
  반환값    : 없음
*/

void ApplyCancelUI::setControl(ApplyCancel* control) {
	this->control = control;
}