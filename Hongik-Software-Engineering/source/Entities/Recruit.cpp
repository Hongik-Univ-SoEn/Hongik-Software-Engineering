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

void Recruit::setNumsOfApply(int num) {
	numsOfApply = num;
}

Recruit* Recruit::createRecruit(vector<string> info) {
	auto rec = new Recruit(info[0], info[1], info[2], stoi(info[3]), info[4], stoi(info[5]));
	return rec;
}


vector<string> Recruit::getRecruitInfo() {
	vector<string> info;
	info.push_back(this->companyName);
	info.push_back(this->businessNumber);
	info.push_back(this->workField);
	info.push_back(this->deadline);
	info.push_back(to_string(this->numOfHire));
	info.push_back(to_string(this->numsOfApply));
	return info;
}

string	Recruit::getWorkField() { return this->workField; }
int		Recruit::getNumOfHire() { return this->numOfHire; }
string	Recruit::getDeadline() { return this->deadline; }
int		Recruit::getNumsOfApply() { return this->numsOfApply; }
string	Recruit::getCompanyName() { return this->companyName; }
string	Recruit::getBusinessNumber() { return this->businessNumber; }

