
#include "ApplyUI.h"


string ApplyUI::startInterface() {
    
    char businessNumber[MAX_STRING];
    fprintf(out_fp, "4.2. 지원하기\n>");
    fscanf(in_fp, "%s", businessNumber);    ///// 파일로부터 사업자 번호를 읽어와서 반환함.

    vector <string> result = this->applyControl->addApply(businessNumber,(IndividualMember* )(Member::getInstance())); //// control 클래스 객체의 addApply 함수를 호출.
    for (auto str : result) { //// control 객체의 함수를 호출해서 반환받은 결과 값을 파일에 출력.
        fprintf(out_fp, " %s", str);
    }
    fprintf(out_fp, "\n\n");
}

void ApplyUI::setControl(Apply* applyControl) {
    this->applyControl = applyControl; //// control 객체를 참조할 수 있도록 속성에 set 함.
}

