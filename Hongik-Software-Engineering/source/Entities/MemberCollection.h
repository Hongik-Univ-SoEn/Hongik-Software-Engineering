

#ifndef _MEMBERCOLLECTION_H
#define _MEMBERCOLLECTION_H

#include "Member.h"

//ÀüÃ¼ ¸â¹ö¸¦ ´ã°íÀÖ´Â ½Ì±ÛÅæ class
class MemberCollection {
public:
	MemberCollection();

	static MemberCollection* getInstance();

	void addMember(Member* member);

	Member* findMember(string id);
	Member* findMemberByInfo(vector<string> info);

	bool removeMember(string id);

	vector<Member*>* getMembers();

private:
	vector<Member*> members;
	static MemberCollection* instance;
};

#endif //_MEMBERCOLLECTION_H