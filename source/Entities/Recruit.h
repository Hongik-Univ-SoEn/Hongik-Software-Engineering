/**
 * Project 채용 정보 시스템
 */


#ifndef _RECRUIT_H
#define _RECRUIT_H

class Recruit {
public: 
    
String getDetailInfo();
    
/**
 * @param num
 */
void setNumsOfApply(Integer num);
    
/**
 * @param info
 */
void createRecruit(String info);
    
List[String] getRecruitInfo();
private: 
    String companyName;
    String workField;
    Integer numOfHire;
    String deadline;
    Integer numsOfApply;
    String businessNumber;
};

#endif //_RECRUIT_H