#include <stdio.h>
#include <string.h>


#include "Controls/MemberManagement/MemberSignUp.h"
#include "Controls/MemberManagement/CompanyMemberSignUp.h"
#include "Controls/MemberManagement/IndividualMemberSignUp.h"
#include "Controls/MemberManagement/Withdrawal.h"
#include "Controls/MemberManagement/SignIn.h"
#include "Controls/MemberManagement/Signout.h"

#include "Boundaries/MemberManagement/MemberSignUpUI.h"
#include "Boundaries/MemberManagement/CompanyMemberSignUpUI.h"
#include "Boundaries/MemberManagement/IndividualMemberSignUpUI.h"
#include "Boundaries//MemberManagement/WithdrawalUI.h"
#include "Boundaries/MemberManagement/SignInUI.h"
#include "Boundaries/MemberManagement/SignoutUI.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

// 사용 함수는 여기에 선언
void join();

// 파일 입출력용 변수 선언
FILE* in_fp, * out_fp;

// Control classes
MemberSignUp memberSignUp;
MemberSignUpUI memberSignUpUI;

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

int main()
{
	// 파일 입출력을 위한 초기화
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	// setup
	memberSignUp.setUI(&memberSignUpUI);
	companySignUp.setUI(&companySignUpUI);
	individualSignUp.setUI(&individualSignUpUI);
	withdrawal.setUI(&withdrawalUI);
	signIn.setUI(&signInUI);
	signOut.setUI(&signOutUI);

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
				withdrawal.start();
				break;
			}
			break;
		case 2:
			switch (menu_level_2) {
			case 1:
				// 로그인
				signIn.start();
				break;
			case 2:
				// 로그아웃
				signOut.start();
				break;
			}
		case 3:
			switch (menu_level_2) {
			case 1:
				// 채용 정보 등록
				break;
			case 2:
				// 등록된 채용 정보 조회
				break;
			}
		case 4:
			switch (menu_level_2) {
			case 1:
				// 채용 정보 검색
				break;
			case 2:
				// 채용 지원
				break;
			case 3:
				// 지원 정보 조회
				break;
			case 4:
				// 지원 취소
				break;
			}
		case 5:
			switch (menu_level_2) {
			case 1:
				// 지원 정보 통계
                
				break;
			}
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
	switch (memberSignUp.getType()) {
	case 1:
		companySignUp.start();
		break;
	case 2:
		individualSignUp.start();
		break;
	}
}

// do nothing when exit?
// if needed, erase the '\n\n' at the last
void program_exit()
{

}