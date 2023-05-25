/**
 * Project 채용 정보 시스템
 */


#ifndef _APPLYINFOUI_H
#define _APPLYINFOUI_H
#include "ApplyInfo.h"

class ApplyInfoUI {
private:
    ApplyInfo *applyInfo;
    
public: 
    ApplyInfoUI(ApplyInfo *applyInfo);
    
    void startInterface(string print);
    
    void selectCancel(string businessNumber);
};

#endif //_APPLYINFOUI_H