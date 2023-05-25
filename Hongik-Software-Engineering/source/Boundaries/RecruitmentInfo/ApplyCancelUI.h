#ifndef _APPLYCANCELUI_H
#define _APPLYCANCELUI_H

#include "../../../UIClass.h"
#include "../../Controls/RecruitmentInfo/ApplyCancel.h"
using namespace std;

//���� ��� boundary class
class ApplyCancelUI : public UIClass {
private:

    ApplyCancel* control;

public:

    void startInterface();

    void setControl(ApplyCancel* control);
};

#endif //_APPLYCANCELUI_H