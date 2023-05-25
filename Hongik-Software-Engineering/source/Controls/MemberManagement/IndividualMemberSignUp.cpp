/**
 * Project 채용 정보 시스템
 */


#include "IndividualMemberSignUp.h"
#include "../../Entities/IndividualMember.h"
#include "../../Entities/MemberCollection.h"

/**
 * IndividualMemberSignUp implementation
 */

bool IndividualMemberSignUp::doSignUp(vector<string> signUpInfo) {
    auto memcol = MemberCollection::getInstance();

    for (auto mem : *(memcol->getMembers())) {
        if (mem->getId().compare(signUpInfo[0]) == 0 || mem->checkDuplicated(signUpInfo[2], signUpInfo[3])) {
            return false;
        }
    }

    memcol->addMember(IndividualMember::createMember(signUpInfo));

    return true;
}