/**
 * Project 채용 정보 시스템
 */


#ifndef _CHECKREGISTEREDRECRUITUI_H
#define _CHECKREGISTEREDRECRUITUI_H
#include "./../../../UIClass.h"
#include "./../../Controls/Hire/CheckRegisteredRecruit.h"

using namespace std;

class CheckRegisteredRecruitUI : public UIClass {
public:
    
    void startInterface();
    void setControl(CheckRegisteredRecruit* control);

private:
    CheckRegisteredRecruit* control;
};


#endif //_CHECKREGISTEREDRECRUITUI_H
