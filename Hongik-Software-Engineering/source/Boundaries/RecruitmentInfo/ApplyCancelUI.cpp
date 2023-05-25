#include "ApplyCancelUI.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * ApplyCancelUI implementation
 */

 /*
	함수 이름 : ApplyCancelUI::startInterface()
	기능	  : 출력 기능 제공
	전달 인자 : 없음 
	반환값    : 없음
 */
void ApplyCancelUI::startInterface() {
	char businessNumber[MAX_STRING];
	fscanf(in_fp, "%s", &businessNumber);

	fprintf(out_fp, "4.4. 지원 취소\n> ");

	string result = control->cancelApply(businessNumber);
	fprintf(out_fp, result.c_str());

	fprintf(out_fp, "\n\n");

}

/*
  함수 이름 : ApplyCancelUI::setControl(ApplyCancel* control)
  기능	    : control setter 함수
  전달 인자 : ApplyCancel* control
  반환값    : 없음
*/

void ApplyCancelUI::setControl(ApplyCancel* control) {
	this->control = control;
}