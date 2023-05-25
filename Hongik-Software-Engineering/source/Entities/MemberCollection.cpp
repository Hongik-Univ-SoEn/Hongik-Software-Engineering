// /**
//  * Project 채용 정보 시스템
//  */

#include "MemberCollection.h"

// /**
//  * MemberCollection implementation
//  */

MemberCollection* MemberCollection::instance = nullptr;

MemberCollection::MemberCollection() {
	this->members = vector<Member*>();
}

/*
	함수 이름 : MemberCollection::getInstance
	기능      : 회원가입한 모든 Member를 가지고 있는 Singleton instance를 반환함
	전달 인자 : 없음
	반환값    : static MemberCollection instance 의 포인터 객체
*/
MemberCollection* MemberCollection::getInstance() {
	if (instance == nullptr) {
		instance = new MemberCollection();
	}
	return instance;
}

/*
	함수 이름 : MemberCollection::addMember
	기능      : MemberCollection 객체가 vector 형태로 갖고 있는 Member에 새로운 Member를 추가
	전달 인자 : Member 클래스의 포인터 객체
	반환값    : 없음
*/
void MemberCollection::addMember(Member* member) {
	members.push_back(member);
	return;
}

/*
	함수 이름 : MemberCollection::findMember
	기능      : 주어진 id와 동일한 회원을 찾아 반환함
	전달 인자 : 비교할 ID (string id)
	반환값    : 일치하는 회원이 존재하면 Member 클래스의 포인터 객체, 없다면 nullptr
*/
Member* MemberCollection::findMember(string id) {
	for (auto mem : members) {
		if (!mem->getId().compare(id)) { return mem; }
	}
	return nullptr;
}

/*
	함수 이름 : MemberCollection::findMemberByInfo
	기능      : 주어진 정보와 동일한 회원을 찾아 반환함
	전달 인자 : 비교할 정보가 담긴 vector<string>
	반환값    : 일치하는 회원이 존재하면 Member 클래스의 포인터 객체, 없다면 nullptr
*/
Member* MemberCollection::findMemberByInfo(vector<string> info) {
	for (auto mem : members) {
		if (mem->getInfo() == info) { return mem; }
	}
	return nullptr;
}

/*
	함수 이름 : MemberCollection::removeMember
	기능      : 주어진 id와 동일한 회원을 찾아 삭제함.
	전달 인자 : 회원의 ID (string id)
	반환값    : 삭제에 성공하면 true, 삭제하지 못하면 false
*/
bool MemberCollection::removeMember(string id) {
	for (auto i = members.begin(); i != members.end(); i++) {
		if (!(*i)->getId().compare(id)) {
			Member* mem = *i;
			members.erase(i);
			return true;
		}
	}
	return false;
}

/*
	함수 이름 : MemberCollection::getMembers
	기능      : 가지고 있는 회원 정보인 vector<Member*>를 포인터 형태로 반환함.
	전달 인자 : 없음
	반환값    : vector<Member*>의 포인터 객체
*/
vector<Member*>* MemberCollection::getMembers() {
	return &members;
}