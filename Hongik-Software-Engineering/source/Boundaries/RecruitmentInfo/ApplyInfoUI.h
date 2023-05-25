/**
 * Project 채용 정보 시스템
 */


#ifndef _APPLYINFOUI_H
#define _APPLYINFOUI_H
#include "../../Controls/RecruitmentInfo/ApplyInfo.h"
#include "../../../UIClass.h"


//지원 정보 조회 boundary class
class ApplyInfoUI :public UIClass{
private:
    ApplyInfo *control;
    
public: 
    
    void startInterface();
   

    void setControl(ApplyInfo* control);
};

#endif //_APPLYINFOUI_H