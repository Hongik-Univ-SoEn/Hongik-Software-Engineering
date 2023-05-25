/**
 * Project 채용 정보 시스템
 */

#ifndef _MEMBER_H
#define _MEMBER_H

#include "Recruit.h"

//회원 entity class
class Member {
public:

	Member();

	Member(string id, string pw);

	Member(string id, string pw, vector<Recruit*>* recruits);

	~Member();

	static Member* getInstance();
	static void setInstance(Member* member);

	static Member* createMember(vector<string> info);

	virtual vector<string> getInfo() { return vector<string>(); }

	virtual bool checkDuplicated(string info1, string info2) { return false; }

	vector<Recruit*> getRecruits();

	string getId();

	bool matchIDPW(string id, string pw);

	virtual string analysis();

protected:
	string id;
	string pw;

	vector<Recruit*> recruits;
	static Member* instance;	// current logged on user
};

#endif //_MEMBER_H