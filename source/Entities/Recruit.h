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
<<<<<<< HEAD
    

    void addNumsOfApply();
    

    void createRecruit(string info);
    
    vector<string> getRecruitInfo(); ///구현 ok

    string getCompanyName(); ///구현 ok
    string getBusinessNumber();
    string getWorkField();
    int getNumOfHire();
    string getDeadline();
    int getNumsOfApply();
   
=======
        
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
    int getNumOfApply();
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0

private: 
    string companyName;
    string workField;
    int numOfHire;
    string deadline;
    int numsOfApply;
    string businessNumber;
<<<<<<< HEAD
    
=======
>>>>>>> 3ecfca7d9dd06100f637e2047a97470e3c10e5a0
};

#endif //_RECRUIT_H