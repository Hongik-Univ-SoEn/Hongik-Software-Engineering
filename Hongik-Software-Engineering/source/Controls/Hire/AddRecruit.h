/**
 * Project 채용 정보 시스템
 */

#ifndef _ADDRECRUIT_H
#define _ADDRECRUIT_H

#include <string>
#include <vector>

using namespace std;

// 해당 클래스는 회사회원이 새로운 채용 정보를 등록할때 정보를 받고 넘겨주는 control class 
class Recruit;

class AddRecruit {
public:
    
    Recruit* addRecruit(vector<string> info);
};

#endif //_ADDRECRUIT_H
