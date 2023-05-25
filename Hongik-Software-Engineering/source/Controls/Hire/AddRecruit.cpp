/**
 * Project 채용 정보 시스템
 */


#include "AddRecruit.h"
#include "../../Entities/RecruitCollection.h"
#include "../../Entities/MemberCollection.h"
#include "../../Entities/CompanyMember.h"

using namespace std;
/**
 * AddRecruit implementation
 */


/**
 * @param workField
 * @return List
 */

Recruit* AddRecruit::addRecruit(vector<string> info) {   
    Recruit* recruit = Recruit::createRecruit(info);
    RecruitCollection::getInstance()->addRecruit(recruit);
    ((CompanyMember*)MemberCollection::getInstance())->addToRecruitList(recruit);
    return recruit;
}
