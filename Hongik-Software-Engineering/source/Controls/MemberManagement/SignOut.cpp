/**
 * Project 채용 정보 시스템
 */


#include "SignOut.h"
#include "../../Entities/Member.h"

bool SignOut::doSignOut() {
	Member::setInstance(nullptr);

	return true;
}