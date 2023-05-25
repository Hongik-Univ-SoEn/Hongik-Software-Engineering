/**
 * Project 채용 정보 시스템
 */


#include "Recruit.h"
#include <iostream>
using namespace std;

/**
 * Recruit implementation
 */

Recruit::Recruit(string companyName, string businessNumber,
				 string workField, int numOfHire,
				 string deadLine, int numsOfApply = 0)
{
	this->companyName = companyName;
	this->businessNumber = businessNumber;
	this->workField = workField;
	this->numOfHire = numOfHire;
	this->deadline = deadLine;
	this->numsOfApply = numsOfApply;
}

/*
    함수 이름 : Recruit::setNumsOfApply
    기능      : 채용 정보의 지원자 수를 설정
    전달 인자 : int num (지원자 수)
    반환값    : 없음
*/
void Recruit::setNumsOfApply(int num) {
	numsOfApply = num;
}

/*
	함수 이름 : Recruit::createRecruit
	기능	  : 채용 정보 생성
	전달 인자 : 회사이름, 사업자번호, 업무분야, 인원수, 신청마감일 순서대로 정보가 담긴 vector<string>
	반환값    : 생성한 Recruit 객체
*/
Recruit* Recruit::createRecruit(vector<string> info) {
	auto rec = new Recruit(info[0], info[1], info[2], stoi(info[3]), info[4]);
	return rec;
}

/*
    함수 이름 : Recruit::getRecruitInfo
    기능      : 채용의 상세 정보를 반환함. 회사이름, 사업자번호, 업무, 인원수, 마감일 정보를 반환.
    전달 인자 : 없음.
    반환값    : 회사이름, 사업자번호, 업무, 인원수, 마감일 정보를 순서대로 포함하는 vector<stirng> 반환
*/
vector<string> Recruit::getRecruitInfo() {
	vector<string> info;
	info.push_back(this->companyName);
	info.push_back(this->businessNumber);
	info.push_back(this->workField);
	info.push_back(to_string(this->numOfHire));
	info.push_back(this->deadline);
	return info;
}

string	Recruit::getWorkField() { return this->workField; }
int		Recruit::getNumOfHire() { return this->numOfHire; }
string	Recruit::getDeadline() { return this->deadline; }
int		Recruit::getNumsOfApply() { return this->numsOfApply; }
string	Recruit::getCompanyName() { return this->companyName; }
string	Recruit::getBusinessNumber() { return this->businessNumber; }

