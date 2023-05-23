/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUIT_H
#define _RECRUIT_H

class Recruit {
public: 
    
string getDetailInfo();
    
/**
 * @param num
 */
void setNumsOfApply(int num);
    
/**
 * @param info
 */
void createRecruit(string info);
    
List[string] getRecruitInfo();

string getWorkField();
int getNumOfHire();

private: 
    string companyName;
    string workField;
    int numOfHire;
    string deadline;
    int numsOfApply;
    string businessNumber;
};

#endif //_RECRUIT_H