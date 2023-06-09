#include <stdio.h>
#include <string.h>

#include "Controls/MemberManagement/MemberSignUp.h"
#include "Controls/MemberManagement/CompanyMemberSignUp.h"
#include "Controls/MemberManagement/IndividualMemberSignUp.h"
#include "Controls/MemberManagement/Withdrawal.h"
#include "Controls/MemberManagement/SignIn.h"
#include "Controls/MemberManagement/Signout.h"

#include "Controls/Apply/SearchRecruitByCompanyName.h"
#include "Controls/Apply/Apply.h"

#include "Controls/Hire/AddRecruit.h"
#include "Controls/Hire/CheckRegisteredRecruit.h"

#include "Controls/RecruitmentInfo/Statistic.h"
#include "Controls/RecruitmentInfo/ApplyInfo.h"
#include "Controls/RecruitmentInfo/ApplyCancel.h"

#include "Boundaries/MemberManagement/MemberSignUpUI.h"
#include "Boundaries/MemberManagement/CompanyMemberSignUpUI.h"
#include "Boundaries/MemberManagement/IndividualMemberSignUpUI.h"
#include "Boundaries/MemberManagement/WithdrawalUI.h"
#include "Boundaries/MemberManagement/SignInUI.h"
#include "Boundaries/MemberManagement/SignoutUI.h"


#include "Boundaries/Apply/SearchRecruitByCompanyNameUI.h"
#include "Boundaries/Apply/ApplyUI.h"

#include "Boundaries/Hire/AddRecruitUI.h"
#include "Boundaries/Hire/CheckRegisteredRecruitUI.h"

#include "Boundaries/RecruitmentInfo/StatisticUI.h"
#include "Boundaries/RecruitmentInfo/ApplyInfoUI.h"
#include "Boundaries/RecruitmentInfo/ApplyCancelUI.h"


#include "Entities/RecruitCollection.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

// 사용 함수는 여기에 선언
void join();

// 파일 입출력용 변수 선언
FILE* in_fp, * out_fp;

// Control classes

CompanyMemberSignUp companySignUp;
CompanyMemberSignUpUI companySignUpUI;

IndividualMemberSignUp individualSignUp;
IndividualMemberSignUpUI individualSignUpUI;

Withdrawal withdrawal;
WithdrawalUI withdrawalUI;

SignIn signIn;
SignInUI signInUI;

SignOut signOut;
SignOutUI signOutUI;

Statistic statistic;
StatisticUI statisticUI;

SearchRecruitByCompanyNameUI searchRecruitByCompanyNameUI;
SearchRecruitByCompanyName searchRecruitByCompanyName;

ApplyUI applyUI;
Apply applyControl;

AddRecruit addRecruit;
AddRecruitUI addRecruitUI;

ApplyInfo applyInfo;
ApplyInfoUI applyInfoUI;

ApplyCancel applyCancel;
ApplyCancelUI applyCancelUI;

CheckRegisteredRecruit checkRegisteredRecruit;
CheckRegisteredRecruitUI checkRegisteredRecruitUI;

int main()
{
	// 파일 입출력을 위한 초기화
	in_fp = fopen(INPUT_FILE_NAME, "r+");
	out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	// setup Control class 설정, file pointer 설정.
	companySignUpUI.setControl(&companySignUp);
	companySignUpUI.setFilePointer(in_fp, out_fp);

	individualSignUpUI.setControl(&individualSignUp);
	individualSignUpUI.setFilePointer(in_fp, out_fp);

	withdrawalUI.setControl(&withdrawal);
	withdrawalUI.setFilePointer(in_fp, out_fp);

	signInUI.setControl(&signIn);
	signInUI.setFilePointer(in_fp, out_fp);

	signOutUI.setControl(&signOut);
	signOutUI.setFilePointer(in_fp, out_fp);

	statisticUI.setControl(&statistic);
	statisticUI.setFilePointer(in_fp, out_fp);

	searchRecruitByCompanyNameUI.setControl(&searchRecruitByCompanyName);
	searchRecruitByCompanyNameUI.setFilePointer(in_fp, out_fp);

	applyUI.setControl(&applyControl);
 	applyUI.setFilePointer(in_fp, out_fp);

	addRecruitUI.setControl(&addRecruit);
	addRecruitUI.setFilePointer(in_fp, out_fp);

	applyInfoUI.setControl(&applyInfo);
	applyInfoUI.setFilePointer(in_fp, out_fp);

	applyCancelUI.setControl(&applyCancel);
	applyCancelUI.setFilePointer(in_fp, out_fp);

	checkRegisteredRecruitUI.setControl(&checkRegisteredRecruit);
	checkRegisteredRecruitUI.setFilePointer(in_fp, out_fp);

	doTask();

	return 0;
}

void doTask()
{
	// level 메뉴 파싱을 위한 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		// 2 입력파일에서 메뉴 숫자 개를 읽기
		fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1) {
		case 1:
			switch (menu_level_2) {
			case 1: 
				// 회원 가입
				join();
				break;
			case 2:
				// 회원 탈퇴
				withdrawalUI.startInterface();
				break;
			}
			break;
		case 2:
			switch (menu_level_2) {
			case 1:
				// 로그인
				signInUI.startInterface();
				break;
			case 2:
				// 로그아웃
				signOutUI.startInterface();
				break;
			}
			break;
		case 3:
			switch (menu_level_2) {
			case 1:
				// 채용 정보 등록
				addRecruitUI.startInterface();
				break;
			case 2:
				// 등록된 채용 정보 조회
				checkRegisteredRecruitUI.startInterface();
				break;
			}
			break;
		case 4:
			switch (menu_level_2) {
			case 1:
				searchRecruitByCompanyNameUI.startInterface();
				break;
			case 2:
				applyUI.startInterface();
				break;
			case 3:
				// 지원 정보 조회
				applyInfoUI.startInterface();
				break;
			case 4:
				// 지원 취소
				applyCancelUI.startInterface();
				break;
			}
			break;
		case 5:
			switch (menu_level_2) {
			case 1:
				// 지원 정보 통계
				statisticUI.startInterface();
				break;
			}
			break;
		case 6:
			switch (menu_level_2) {
			case 1: // "6.1. “ 종료 메뉴 부분
				program_exit();
				is_program_exit = 1;
				break;;
			}
		}
	}
	return;
}

// 회원가입
void join()
{
	int type;
	fscanf(in_fp, "%d", &type);
	
	switch (type) {
	case 1:
		companySignUpUI.startInterface();
		break;
	case 2:
		individualSignUpUI.startInterface();
		break;
	}
}

// do nothing when exit?
// if needed, erase the '\n\n' at the last
void program_exit()
{
	fprintf(out_fp, "6.1. 종료");
	fclose(in_fp);
	fclose(out_fp);
}