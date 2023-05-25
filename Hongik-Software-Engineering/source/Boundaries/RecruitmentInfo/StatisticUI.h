/**
 * Project 채용 정보 시스템
 */


#ifndef _STATISTICUI_H
#define _STATISTICUI_H
#include "../../../UIClass.h"
#include "../../Controls/RecruitmentInfo/Statistic.h"
using namespace std;

class StatisticUI : public UIClass{
public: 
    
    void startInterface();

    void setControl(Statistic* control);

private:
    Statistic* control;
};

#endif //_STATISTICUI_H