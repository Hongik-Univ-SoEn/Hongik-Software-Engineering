/**
 * Project 채용 정보 시스템
 */


#include "CompanyMemberSignUp.h"
#include "../../Entities/CompanyMember.h"
#include "../../Entities/MemberCollection.h"

/**
 * CompanyMemberSignUp implementation
 */


/**
 * @param signUpInfo
 * @return bool
 */
bool CompanyMemberSignUp::doSignUp(vector<string> signUpInfo) {
    auto memcol = MemberCollection::getInstance();
    
    for (auto mem : *(memcol->getMembers())) {
        if (mem->getId().compare(signUpInfo[0]) == 0 || mem->checkDuplicated(signUpInfo[2], signUpInfo[3])) {
            return false;
        }
    }

    memcol->addMember(CompanyMember::createMember(signUpInfo));

    return true;
}