/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUIT_H
#define _RECRUIT_H


#include <string>
#include<vector>
using namespace std;

class Recruit {
public: 
    
    string getDetailInfo();
    

    void addNumsOfApply();
    

    void createRecruit(string info);
    
    vector<string> getRecruitInfo(); ///구현 ok

    string getCompanyName(); ///구현 ok
    string getBusinessNumber();
    string getWorkField();
    int getNumOfHire();
    string getDeadline();
    int getNumsOfApply();
   

private: 
    string companyName;
    string workField;
    int numOfHire;
    string deadline;
    int numsOfApply;
    string businessNumber;
    
};

#endif //_RECRUIT_H