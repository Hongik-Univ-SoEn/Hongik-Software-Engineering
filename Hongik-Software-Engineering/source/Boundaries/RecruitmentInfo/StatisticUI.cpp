/**
 * Project 채용 정보 시스템
 */


#include "StatisticUI.h"
#include <string>

/**
 * StatisticUI implementation
 */

/*
	함수 이름 : StatisticUI::startInterface()
	기능	 : 출력 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
void StatisticUI::startInterface() {
    fprintf(out_fp, "5.1. 지원 정보 통계\n");

	string result;
	result = control->analysis();

	fprintf(out_fp, result.c_str());

    fprintf(out_fp, "\n");
}

void StatisticUI::setControl(Statistic* control) {
	this->control = control;
	
}