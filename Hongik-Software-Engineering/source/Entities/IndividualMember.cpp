#include "IndividualMember.h"
#include <map>

IndividualMember::IndividualMember() {
	id = "";
	pw = "";
	name = "";
	socialSecurityNumber = "";
}

IndividualMember::IndividualMember(string id, string pw, string name, string socialSecurityNumber) {
	this->id = id;
	this->pw = pw;
	this->name = name;
	this->socialSecurityNumber = socialSecurityNumber;
}

vector<string> IndividualMember::getInfo() {
	auto v = vector<string>();
	v.push_back(name);
	v.push_back(socialSecurityNumber);
	return v;
}

IndividualMember* IndividualMember::createMember(vector<string> info) {
	auto mem = new IndividualMember(info[0], info[1], info[2], info[3]);
	mem->recruits = vector<Recruit*>();
	return mem;
}


bool IndividualMember::checkDuplicated(string name, string socialSecurityNumber) {
	if (!this->name.compare(name) && !this->socialSecurityNumber.compare(socialSecurityNumber)) {
		return true;
	} else {
		return false;
	}
}

void IndividualMember::addToApplyList(Recruit* apply) {
	this->recruits.push_back(apply);
}

/*
	함수 이름 : IndividualMember::cancelApply(string businessNumber)
	기능	  : 지원 취소 기능 제공
	전달 인자 : string businessNumber
	반환값    : 없음
*/
void IndividualMember::cancelApply(string businessNumber) {
	for (auto recruit = recruits.begin(); recruit != recruits.end(); recruit++) {
		if (!(*recruit)->getBusinessNumber().compare(businessNumber)) {
			(*recruit)->setNumsOfApply((*recruit)->getNumsOfApply() - 1);
			recruits.erase(recruit);
			break;
		}
	}
}

/*
	함수 이름 : IndividualMember::analysis()
	기능	  : 지원한 채용 정보 분석 기능 제공
	전달 인자 : 없음
	반환값    : string
*/
string IndividualMember::analysis() {
	// 카운트 하기위한 map
	map<string, int> count;

	for (auto recruit : recruits) {
		if (count.find(recruit->getWorkField()) != count.end()) { // 이미 존재하는 경우
			count[recruit->getWorkField()]++;
		} else {
			count.insert({ recruit->getWorkField(), 1 });
		}
	}

	string result = "> ";
	for (auto it = count.begin(); it != count.end(); it++) {
		result += it->first + " " + to_string(it->second) + "\n";
	}

	return result;

}