/**
 * Project 채용 정보 시스템
 */


#include "Statistic.h"
#include "../../Entities/Member.h"
#include <iostream>
using namespace std;

/**
 * Statistic implementation
 */

/*
	함수 이름 : Statistic::analysis()
	기능	   : 지원 정보 통계 기능 제공
	전달 인자 : 없음
	반환값    : string
*/
string Statistic::analysis() {
	return Member::getInstance()->analysis();
}
