#include "ApplyCancel.h"
#include "../../Boundaries/RecruitmentInfo/ApplyCancelUI.h"
#include "../../Entities/IndividualMember.h"
#include "../../Entities/Member.h"
#include <iostream>

/**
 * ApplyCancel implementation
 */

 /*
     �Լ� �̸� : ApplyCancel::cancelApply()
     ���	   : ���� ��� ��� ����
     ���� ���� : string businessNumber
     ��ȯ��    : string
 */
string ApplyCancel::cancelApply(string businessNumber) {
    Member* member = Member::getInstance();
    IndividualMember* im = (IndividualMember*)member;
    string result = im->cancelApply(businessNumber);

    return result;
}
