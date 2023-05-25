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

MemberCollection* MemberCollection::getInstance() {
	if (instance == nullptr) {
		instance = new MemberCollection();
	}
	return instance;
}

// /**
//  * @return void
//  */
void MemberCollection::addMember(Member* member) {
	members.push_back(member);
	return;
}

// /**
//  * @param info
//  * @return Member
//  */
Member* MemberCollection::findMember(string id) {
	for (auto mem : members) {
		if (!mem->getId().compare(id)) { return mem; }
	}
	return nullptr;
}

Member* MemberCollection::findMemberByInfo(vector<string> info) {
	for (auto mem : members) {
		if (mem->getInfo() == info) { return mem; }
	}
	return nullptr;
}

// /**
//  * @return void
//  */
bool MemberCollection::removeMember(string id) {
	for (auto i = members.begin(); i != members.end(); i++) {
		if ((*i)->getId().compare(id)) {
			members.erase(i);
			(*i)->deleteMember();
			return true;
		}
	}
	return false;
}

/*
bool MemberCollection::removeMemberByInfo(vector<string> info) {
	for (auto i = members.begin(); i != members.end(); i++) {
		if ((*i)->getInfo() == info) {
			members.erase(i);
			return true;
		}
	}
	return false;
}
*/

vector<Member*>* MemberCollection::getMembers() {
	return &members;
}