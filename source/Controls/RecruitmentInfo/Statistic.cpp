/**
 * Project 채용 정보 시스템
 */


#include "Statistic.h"
#include <iostream>
using namespace std;

/**
 * Statistic implementation
 */

/*
	함수 이름 : Statistic::analysis()
	기능	   : 지원 정보 통계 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
void Statistic::analysis() {
    string forReturn = member->analysis();
    StatisticUI statisticUI;
    statisticUI.startInterface(forReturn);
}

/*
  함수 이름 : Statistic::Statistic(Member *member)
  기능	   : 멤버 변수 member 초기화
  전달 인자 : Member *member
  반환값    : 없음
*/
Statistic::Statistic(Member *member) {
    this->member = member;
} 