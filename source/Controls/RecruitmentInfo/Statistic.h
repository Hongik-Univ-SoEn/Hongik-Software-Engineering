/**
 * Project 채용 정보 시스템
 */


#ifndef _STATISTIC_H
#define _STATISTIC_H
#include "Member.h"
#include "StatisticUI.h"

class Statistic {
private:
    Member *member;
public: 
    Statistic(Member *member);
    void analysis();
};

#endif //_STATISTIC_H