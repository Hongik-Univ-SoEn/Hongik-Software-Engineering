

#ifndef _MEMBERCOLLECTION_H
#define _MEMBERCOLLECTION_H

#include "Member.h"

class MemberCollection {
public:
	MemberCollection();

	static MemberCollection* getInstance();

	void addMember(Member* member);

	Member* findMember(string id);
	Member* findMemberByInfo(vector<string> info);

	bool removeMember(string id);
	//bool removeMemberByInfo(vector<string> info);

	vector<Member*>* getMembers();

private:
	vector<Member*> members;
	static MemberCollection* instance;
};

#endif //_MEMBERCOLLECTION_H