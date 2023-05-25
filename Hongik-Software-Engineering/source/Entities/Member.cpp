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

Member* Member::getInstance() {
	return instance;
}

void Member::setInstance(Member* member) {
	instance = member;
}

Member* Member::createMember(vector<string> info) {
	auto mem = new Member(info[0], info[1]);
	return mem;
}

bool Member::matchIDPW(string id, string pw) {
	if (this->id.compare(id) == 0 && this->pw.compare(pw) == 0) {
		return true;
	} else {
		return false;
	}
}

// TODO : erase this?
void Member::deleteMember() {}

/*
	함수 이름 : IndividualMember::getRecruits()
	기능	   : recruits 반환 기능 제공
	전달 인자 : 없음
	반환값    : 없음
*/
vector<Recruit*> Member::getRecruits() {
	return this->recruits;
}

string Member::getId() {
	return this->id;
}

string Member::analysis() {
	return "";
}