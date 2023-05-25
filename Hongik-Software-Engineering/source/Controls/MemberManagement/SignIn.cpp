/**
 * Project 채용 정보 시스템
 */


#include "SignIn.h"
#include "../../Entities/MemberCollection.h"

 /**
  * SignIn implementation
  */


bool SignIn::doSignIn(vector<string> signInInfo) {
	auto memcol = MemberCollection::getInstance();

	auto mem = memcol->findMember(signInInfo[0]);

	Member::setInstance(mem);

	if (mem == nullptr) return false;
	else return true;
}
