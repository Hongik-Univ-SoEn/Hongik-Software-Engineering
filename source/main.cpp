#include <stdio.h>
#include <string.h>

#include<SearchRecruitByCompanyNameUI.h>
#include<SearchRecruitByCompanyName.h>
#include<ApplyUI.h>
#include<Apply.h>
#include<RecruitCollection.h>
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



void doTask();
void program_exit();


void join();	// example function

FILE* in_fp, * out_fp;

int main()
{
	
	FILE* in_fp = fopen("./input.txt", "r+");
	FILE* out_fp = fopen("./output.txt", "w+");

	doTask();

	return 0;
}

void doTask()
{
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

		
		switch (menu_level_1) {
		case 1:
			switch (menu_level_2) {
			case 1: 
				// ȸ�� ����
				join();	// example function
				break;
			case 2:
				// ȸ�� Ż��
				break;
			}
			break;
		case 2:
			switch (menu_level_2) {
			case 1:
				// �α���
				break;
			case 2:
				// �α׾ƿ�
				break;
			}
		case 3:
			switch (menu_level_2) {
			case 1:
				// ä�� ���� ���
				break;
			case 2:
				// ��ϵ� ä�� ���� ��ȸ
				break;
			}
		case 4:
			switch (menu_level_2) {
			case 1:
					
				    RecruitCollection* recruitCollection = new RecruitCollection(); ///어디선가 이미 생성되어 있다고 가정.
    				SearchRecruitByCompanyName* searchRecruitByCompanyName =  new SearchRecruitByCompanyName() ; ///task에서 생성
    				SearchRecruitByCompanyNameUI* searchRecruitByCompanyNameUI = new SearchRecruitByCompanyNameUI(); ////task에서 생성
    				searchRecruitByCompanyName->setRecruitCollection(recruitCollection);
    				searchRecruitByCompanyName->setSearchRecruitByCompanyNameUI(searchRecruitByCompanyNameUI);
    				searchRecruitByCompanyNameUI->setSearchRecruitByCompanyName(searchRecruitByCompanyName); ///컨트롤 클래스와 바운더리 클래스가 서로에 대한 ref를 갖고 있음.
    				searchRecruitByCompanyName->start(); /////// 바운더리 클라스의 startInterface함수를 호출함.
    				searchRecruitByCompanyNameUI->searchRecruitByCompany("홍익대"); 
				break;
			case 2:
				
				break;
			case 3:
				// ���� ���� ��ȸ
				break;
			case 4:
				// ���� ���
				break;
			}
		case 5:
			switch (menu_level_2) {
			case 1:
				// ���� ���� ���
				break;
			}
		case 6:
			switch (menu_level_2) {
			case 1: // "6.1. �� ���� �޴� �κ�
				program_exit();
				is_program_exit = 1;
				break;;
			}
		}
	}
	return;
}

// example function
void join()
{
	/* !!!!!!! !!!!!!!!! �߿�
	* �ܼ��� ������ ���� ������ϴ� ����� ���̱� ���� �ڵ��̹Ƿ� �� �Լ����� �״�� ����ϸ� �ȵ�.
	* control boundary class . �� �� �̿��ؼ� �ش� ����� �����ǵ��� �ؾ� ��
	*/
	char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
		address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
	// : , , ID, Password �Է� ���� �̸� �ֹι�ȣ �� ���Ϸκ��� ����
	fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

	// �ش� ��� ����
	//...
	// ��� ����
	fprintf(out_fp, "1.1. \n"); //ȸ������
	fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

// do nothing when exit?
void program_exit()
{
	//....
}