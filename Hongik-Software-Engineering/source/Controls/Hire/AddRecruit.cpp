/**
 * Project 채용 정보 시스템
 */


#include "AddRecruit.h"
#include "./../../Entities/Recruit.h"

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

 

    return recruit;
}
