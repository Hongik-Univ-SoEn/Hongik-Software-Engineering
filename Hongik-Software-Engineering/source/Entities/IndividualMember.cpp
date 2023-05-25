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

/*
	함수 이름 : IndividualMember::getInfo
	기능	  : 객체의 정보(이름, 주민등록번호)를 반환
	전달 인자 : 없음
	반환값    : 이름과 주민등록번호가 순서대로 담긴 vector<string>
*/
vector<string> IndividualMember::getInfo() {
	auto v = vector<string>();
	v.push_back(name);
	v.push_back(socialSecurityNumber);
	return v;
}

/*
	함수 이름 : IndividualMember::createMember
	기능	  : 새로운 IndividualMember 객체를 생성
	전달 인자 : ID, PW, 이름, 주민등록번호가 순서대로 담긴 vector<string>
	반환값    : 생성된 IndividualMember 객체의 포인터
*/
IndividualMember* IndividualMember::createMember(vector<string> info) {
	auto mem = new IndividualMember(info[0], info[1], info[2], info[3]);
	mem->recruits = vector<Recruit*>();
	return mem;
}

/*
	함수 이름 : IndividualMember::checkDuplicated
	기능	  : 객체가 가진 정보가 주어진 정보와 일치하는지 검사
	전달 인자 : 비교할 이름(string name)과 주민등록번호(string socialSecurityNumber)
	반환값    : 주어진 인자와 객체가 동일한 정보를 가졌다면 true, 그렇지 않다면 false
*/
bool IndividualMember::checkDuplicated(string name, string socialSecurityNumber) {
	if (!this->name.compare(name) && !this->socialSecurityNumber.compare(socialSecurityNumber)) {
		return true;
	} else {
		return false;
	}
}


/*
    함수 이름 : IndividualMember::addToApplyList(Recruit* apply)
    기능      : 개인 회원이 갖고 있는 지원 정보에 새로운 지원 정보를 추가함.
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void IndividualMember::addToApplyList(Recruit* apply) {
	this->recruits.push_back(apply);
}

/*
	함수 이름 : IndividualMember::cancelApply
	기능	  : 지원 취소 기능 제공
	전달 인자 : 취소할 채용 정보의 사업자 번호(string businessNumber)
	반환값    : 출력용 string
*/
string IndividualMember::cancelApply(string businessNumber) {
	string result = "";
	for (auto recruit = recruits.begin(); recruit != recruits.end(); recruit++) {
		if (!(*recruit)->getBusinessNumber().compare(businessNumber)) {
			//[회사이름] [사업자번호] [업무]
			result += (*recruit)->getCompanyName() + " " + (*recruit)->getBusinessNumber() + " " + (*recruit)->getWorkField();
			(*recruit)->setNumsOfApply((*recruit)->getNumsOfApply() - 1);
			recruits.erase(recruit);
			break;
		}
	}

	return result;
}

/*
	함수 이름 : IndividualMember::analysis
	기능	  : 지원한 채용 정보 분석 기능 제공
	전달 인자 : 없음
	반환값    : 출력용 string
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