/**
 * Project 채용 정보 시스템
 */

#include<stdio.h>
#ifndef _APPLYUI_H
#define _APPLYUI_H
#include<string>
#include"IndividualMember.h"
#include"Apply.h"
#include<vector>
#include<iostream>
#include<fstream>

using namespace std;


class ApplyUI {
public: 
    
    void applyToRecruit(string businessNumber,IndividualMember* individualMember);
    void startInterface();
    void setApply(Apply* apply);

private:
    Apply*  apply;

};



#endif //_APPLYUI_H

////메뉴 선택하면, 컨트롤 클래스 생성 -> Apply 객체 생성
/// 바운더리 클래스 생성 -> ApplyUI 객체 생성.
/// 컨트롤 클래스에 바운더리 클래스 전달.
/// 바운더리 클래스에 컨트롤 클래스 전달.
/// 컨트롤 클래스에서 startinterface 호출.
///바운더리 클래스의 함수 호출

// void tast42(string businesNumber, IndividualMember individualMember){
//     ApplyUI applyUI;
//     Apply apply;
//     RecruitCollection recruitCollection;
//     apply.setIndividualMember(individualMember);
//     apply.setRecruitCollection(recruitCollection);
//     apply.setApplyUI(applyUI);
//     applyUI.setApply(apply);
//     apply.start();
//     applyUI.applyToRecruit(businesNumber, individualMember);


// }