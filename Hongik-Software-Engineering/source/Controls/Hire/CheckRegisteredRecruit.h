/**
 * Project 채용 정보 시스템
 */


#ifndef _CHECKREGISTEREDRECRUIT_H
#define _CHECKREGISTEREDRECRUIT_H

#include <string>
#include <vector>

using namespace std;

//해당 클래스는 회사회원이 등록한 본인의 채용 정보를 조회할때 리스트를 반환해주는 control class
class CheckRegisteredRecruit {
public:

	vector<string> showRecruit();
};

#endif //_CHECKREGISTEREDRECRUIT_H
