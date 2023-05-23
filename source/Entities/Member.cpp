/**
 * Project 채용 정보 시스템
 */


#include "Member.h"

/**
 * Member implementation
 */


/**
 * @param info
 * @return Member
 */
virtual Member Member::createMember(String info) {
    return null;
}

/**
 * @return String
 */
virtual String Member::getInfo() {
    return "";
}

/**
 * @param info
 * @return Boolean
 */
virtual Boolean Member::checkDuplicated(String info) {
    return null;
}

/**
 * @param info
 * @return Boolean
 */
Boolean Member::matchIDPW(String info) {
    return null;
}

void Member::deleteMember() {

}

/**
 * @return List[Recruit]
 */
List[Recruit] Member::getRecruits() {
    return null;
}

void Member::analysis() {

}