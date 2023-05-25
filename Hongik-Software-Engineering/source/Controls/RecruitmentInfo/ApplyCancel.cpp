#include "ApplyCancel.h"
#include "../../Boundaries/RecruitmentInfo/ApplyCancelUI.h"
#include "../../Entities/IndividualMember.h"
#include "../../Entities/Member.h"
#include <iostream>

/**
 * ApplyCancel implementation
 */

 /*
     함수 이름 : string ApplyCancel::cancelApply(string businessNumber)
     기능	   : 지원 취소 기능 제공
     전달 인자 : string businessNumber // 사업자 번호
     반환값    : string //[회사이름] [사업자번호] [업무]
 */
string ApplyCancel::cancelApply(string businessNumber) {
    Member* member = Member::getInstance();
    IndividualMember* im = (IndividualMember*)member;
    string result = im->cancelApply(businessNumber);

    return result;
}
