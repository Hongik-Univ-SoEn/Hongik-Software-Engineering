/**
 * Project 채용 정보 시스템
 */


#include "CheckRegisteredRecruitUI.h"
#include "./../../Entities/CompanyMember.h"
#include "./../../Entities/RecruitCollection.h"

/**
 * CheckRegisteredRecruitUI implementation
 */

/*
   함수 이름   : CheckRegisteredRecruitUI::startInterface()
   기능  : 등록된 채용 정보를 getRecruit(), getRecreuitInfo() 를 통해 현재 회사회원이 등록한 채용 정보를 가져온다.
   전달 인자 : 없음
   반환값 : 없음
 */
void CheckRegisteredRecruitUI::startInterface() {
   char companyName[MAX_STRING], workField[MAX_STRING], deadline[MAX_STRING], businessNumber[MAX_STRING];
   char numOfHire[MAX_STRING];

   
   auto companyMember = (CompanyMember*)Member::getInstance();
   auto info = companyMember->getInfo();
   Recruit* recruit = companyMember->getRecruits()[0];
   auto recruitinfo = recruit->getRecruitInfo();

   //회사이름, 사업자번호, 업무, 인원 수, 마감일 출력파일에 출력
   fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n>");
   fprintf(out_fp, " %s %d %s", recruitinfo[2].c_str(), recruitinfo[3].c_str(), recruitinfo[4].c_str());
   fprintf(out_fp, "\n");

}

/*
   함수 이름   : CheckRegisteredRecruitUI::setControl(CheckRegisteredRecruit* control)
   기능  :
   전달 인자 :
   반환값 : 없음.
 */
void CheckRegisteredRecruitUI::setControl(CheckRegisteredRecruit* control) {
   this->control = control;
}
