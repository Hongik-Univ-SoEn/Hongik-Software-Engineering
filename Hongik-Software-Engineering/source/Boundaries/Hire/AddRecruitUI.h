/**
 * Project 채용 정보 시스템
 */


#ifndef _ADDRECRUITUI_H
#define _ADDRECRUITUI_H

#include "../../Controls/Hire/AddRecruit.h"
#include "../../../UIClass.h"
#include "./../../Entities/Member.h"

using namespace std;

class AddRecruitUI :public UIClass {
public:
    void startInterface();
    void setControl(AddRecruit* control);
private:
    AddRecruit* control;
};

#endif //_ADDRECRUITUI_H
