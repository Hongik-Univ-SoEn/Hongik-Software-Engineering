/**
 * Project 채용 정보 시스템
 */

#include "Member.h"
#include <iostream>

Member* Member::instance = nullptr;
/**
 * Member implementation
 */

Member::Member() {
	id = "";
	pw = "";
	recruits = vector<Recruit*>();
}

Member::Member(string id, string pw) {
	this->id = id;
	this->pw = pw;
	this->recruits = vector<Recruit*>();
}

Member::Member(string id, string pw, vector<Recruit*>* recruits) {
	this->id = id;
	this->pw = pw;
	this->recruits = *recruits;
}

Member::~Member() {
	this->recruits.clear();
}

/*
	함수 이름 : Member::getInstance
	기능      : 현재 로그인된 회원 정보를 담고 있는 Member Singleton instance를 반환함
	전달 인자 : 없음
	반환값    : static Member* instance 객체
*/
Member* Member::getInstance() {
	return instance;
}

/*
	함수 이름 : Member::setInstance
	기능      : Member Singleton instance를 새로 로그인한 회원 정보로 설정함
	전달 인자 : 로그인한 Member 객체의 포인터
	반환값    : 없음
*/
void Member::setInstance(Member* member) {
	instance = member;
}

/*
	함수 이름 : Member::createMember
	기능      : 주어진 정보를 기반으로 새로운 회원 생성
	전달 인자 : id, pw를 포함한 회원 정보를 담은 vector<string>
	반환값    : 생성한 Member 객체의 포인터
*/
Member* Member::createMember(vector<string> info) {
	auto mem = new Member(info[0], info[1]);
	return mem;
}

/*
	함수 이름 : Member::matchIDPW
	기능      : 주어진 id, pw가 객체의 정보와 일치하는지 판단
	전달 인자 : 대조하고자 하는 아이디(string id)와 비밀번호(string pw)
	반환값    : 현재 Member 객체의 ID, PW와 일치하면 true, 일치하지 않으면 false
*/
bool Member::matchIDPW(string id, string pw) {
	if (this->id.compare(id) == 0 && this->pw.compare(pw) == 0) {
		return true;
	} else {
		return false;
	}
}

/*
	함수 이름 : Member::getRecruits
	기능	  : 지원했거나 올렸던 채용 정보 반환 기능 제공
	전달 인자 : 없음
	반환값    : 채용정보가 담긴 vector<Recruit*>
*/
vector<Recruit*> Member::getRecruits() {
	return this->recruits;
}

string Member::getId() {
	return this->id;
}

/*
	함수 이름 : Member::analysis
	기능	  : 상속을 위한 가상함수. 순수가상함수로 만들면 객체 생성이 불가능하기에 어쩔 수 없이 구현
	전달 인자 : 없음
	반환값    : 빈 문자열
*/
string Member::analysis() {
	return "";
}