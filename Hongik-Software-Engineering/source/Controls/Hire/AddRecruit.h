/**
 * Project 채용 정보 시스템
 */

#ifndef _ADDRECRUIT_H
#define _ADDRECRUIT_H

#include <string>
#include <vector>

using namespace std;

class Recruit;

class AddRecruit {
public:
    
    Recruit* addRecruit(vector<string> info);
};

#endif //_ADDRECRUIT_H
