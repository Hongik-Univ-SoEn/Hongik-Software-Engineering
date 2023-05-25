/**
 * Project 채용 정보 시스템
 */


#include "Withdrawal.h"
#include "../../Entities/Member.h"
#include "../../Entities/MemberCollection.h"

/**
 * Withdrawal implementation
 */

bool Withdrawal::withDrawal() {
    auto mem = Member::getInstance();
    auto memcol = MemberCollection::getInstance();
    
    memcol->removeMember(mem->getId());
    delete mem;

    return true;
}