

#include "RecruitCollection.h"


void RecruitCollection::setRecruit(Recruit* recruit){
    vector<Recruit*> recruitList = this->recruit;
    recruitList.push_back(recruit);
}

void RecruitCollection::addRecruit() {
    return;
}


vector<string> RecruitCollection::findRecruitByCompanyName(string companyName) {
    vector<Recruit*> recruitList = this->recruit;
    int len = sizeof(recruitList);
    Recruit* resultRecurit;
    for(int i=0;i<len;i++){
        string companyNameFromRecruit = recruitList[i]->getCompanyName();
        if (companyNameFromRecruit==companyName){
            resultRecurit = recruitList[i];
            break; 
        }
    }
    vector<string> info = resultRecurit->getRecruitInfo();
    
}


Recruit* RecruitCollection::findRecruitByBusinessNumber(string businessNumber){
    vector<Recruit*> recruitList = this->recruit;
    int len = sizeof(recruitList);
    Recruit* resultRecurit;
    for(int i=0;i<len;i++){
        string businessNumberFromRecruit = recruitList[i]->getBusinessNumber();
        if (businessNumberFromRecruit==businessNumber){
            resultRecurit = recruitList[i];
            break; 
        }
    }
    return resultRecurit;
}
    

void RecruitCollection::removeRecruit() {
    return;
}