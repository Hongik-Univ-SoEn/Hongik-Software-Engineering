

#ifndef _SEARCHRECRUITBYCOMPANYNAMEUI_H
#define _SEARCHRECRUITBYCOMPANYNAMEUI_H

#include <string>
#include <vector>
#include "../../Controls/Apply/SearchRecruitByCompanyName.h"
#include "../../UIClass.h"
using namespace std;

///// 해당 클래스는 회사 이름으로 검색했을 때의 채용 정보 리스트를 반환하기 위해 사용되는 boundary class
////control 클래스인 SearchRecruitByCompanyName의 객체를 참조함.
/// 파일 입출력을 위해서 파일 포인터를 담고 있는 UIClass class를 상속받음.
class SearchRecruitByCompanyNameUI : public UIClass{
public: 
    
    void setControl(SearchRecruitByCompanyName* x);
    void startInterface();

private:
    SearchRecruitByCompanyName* searchRecruitByCompanyName;

};

#endif 


