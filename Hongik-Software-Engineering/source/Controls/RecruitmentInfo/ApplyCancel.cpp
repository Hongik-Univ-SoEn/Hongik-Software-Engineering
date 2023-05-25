#include "ApplyCancel.h"
#include "../../Boundaries/RecruitmentInfo/ApplyCancelUI.h"
#include "../../Entities/IndividualMember.h"
#include "../../Entities/Member.h"
#include <iostream>

/**
 * ApplyCancel implementation
 */

 /*
     �Լ� �̸� : string ApplyCancel::cancelApply(string businessNumber)
     ���	   : ���� ��� ��� ����
     ���� ���� : string businessNumber // ����� ��ȣ
     ��ȯ��    : string //[ȸ���̸�] [����ڹ�ȣ] [����]
 */
string ApplyCancel::cancelApply(string businessNumber) {
    Member* member = Member::getInstance();
    IndividualMember* im = (IndividualMember*)member;
    string result = im->cancelApply(businessNumber);

    return result;
}
