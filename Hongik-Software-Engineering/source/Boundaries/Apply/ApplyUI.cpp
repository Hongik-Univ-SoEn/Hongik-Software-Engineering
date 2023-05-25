#include "ApplyUI.h"


/*
    함수 이름 : ApplyUI::startInterface()
    기능   : control class를 참조하여 control class의 addApply함수를 호출하고, 호출 결과로 받아온 정보를 파일에 출력함.
    전달 인자 : 없음
    반환값    : 없음
*/
void ApplyUI::startInterface() {
    
    char businessNumber[MAX_STRING];
    fprintf(out_fp, "4.2. 지원하기\n>");
    fscanf(in_fp, "%s", businessNumber);    ///// 파일로부터 사업자 번호를 읽어와서 반환함.

    vector<string> result = this->applyControl->addApply(businessNumber, (IndividualMember*)(Member::getInstance())); //// control 클래스 객체의 addApply 함수를 호출.
    
    for (auto str : result) { //// control 객체의 함수를 호출해서 반환받은 결과 값을 파일에 출력.
        fprintf(out_fp, " %s", str.c_str());
    }
    fprintf(out_fp, "\n\n");
}


/*
    함수 이름 : ApplyUI::setControl(Apply* applyControl)
    기능     : 외부에서 Apply class(control class)의 포인터 객체를 전달 받아, ApplyUI(boundary class)가 Apply(Control class)를 참조하도록 속성값으로 저장.
    전달 인자 : Apply class의 포인터 객체
    반환값    : 없음.
*/

void ApplyUI::setControl(Apply* applyControl) {
    this->applyControl = applyControl; //// control 객체를 참조할 수 있도록 속성에 set 함.
}

