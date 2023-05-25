
#ifndef _APPLYUI_H
#define _APPLYUI_H

#include "../../Controls/Apply/Apply.h"
#include"../../UIClass.h"

///// 해당 클래스는 채용 즉시 지원 usecase에 사용되는 boundary class
/// control class인 Apply 클래스 객체를 참조함. 
/// 파일 입출력을 위해서 파일 포인터를 담고 있는 UIClass class를 상속받음.

class ApplyUI :public UIClass{
public:

	void startInterface();

	void setControl(Apply* applyControl);


private:
	Apply* applyControl;

};

#endif //_APPLYUI_H