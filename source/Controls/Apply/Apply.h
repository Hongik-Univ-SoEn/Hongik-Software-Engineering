/**
 * Project 채용 정보 시스템
 */

#include<string>
#ifndef _APPLY_H
#define _APPLY_H
#include<vector>
#include<IndividualMember.h>
#include<RecruitCollection.h>
#include<ApplyUI.h>
using namespace std;

class Apply {
public: 

vector<string> addApply(string businessNumber, IndividualMember* individualMEmber);
void setRecruitCollection(RecruitCollection* recruitCollection);
void setIndividualMember(IndividualMember* individualMember);
void setApplyUI(ApplyUI* applyUI);
void start();
private : 
    RecruitCollection* recruitCollection;
    IndividualMember* individualMember;
    ApplyUI * applyUI;
};

#endif //_APPLY_H