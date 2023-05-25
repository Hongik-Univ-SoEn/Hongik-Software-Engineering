/**
 * Project 채용 정보 시스템
 */


#ifndef _APPLYINFO_H
#define _APPLYINFO_H
#include "ApplyInfoUI.h"
#include "Member.h"


class ApplyInfo {
private:
    ApplyInfoUI *applyInfoUI;
    Member *member;

    string makestringForPrint();
public: 
    ApplyInfo(Member *member);
    void cancelApply(string businessNumber);
};

#endif //_APPLYINFO_H