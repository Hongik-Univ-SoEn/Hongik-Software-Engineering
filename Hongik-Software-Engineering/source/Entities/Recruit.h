/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUIT_H
#define _RECRUIT_H

#include <string>
#include <vector>

using namespace std;

//채용 정보 entity class
class Recruit {
public: 

    Recruit(string companyName, string businessNumber,
            string workField, int numOfHire,
            string deadLine, int numsOfApply);

    static Recruit* createRecruit(vector<string> info);

    vector<string> getRecruitInfo();

    void setNumsOfApply(int num);

    // Getters of default attributes
    string getCompanyName();
    string getBusinessNumber();
    string getWorkField();
    int getNumOfHire();
    string getDeadline();
    int getNumsOfApply();
   
private: 
    string companyName;
    string businessNumber;
    string workField;
    int numOfHire;
    string deadline;
    int numsOfApply;
};

#endif //_RECRUIT_H