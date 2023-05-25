/**
 * Project ä�� ���� �ý���
 */


#include "ApplyCancelUI.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * ApplyInfoUI implementation
 */

 /*
	 �Լ� �̸� : ApplyCancelUI::startInterface()
	 ���	   : ��� ��� ����
	 ���� ���� : ����
	 ��ȯ��    : ����
 */
void ApplyCancelUI::startInterface() {
	char businessNumber[MAX_STRING];
	fscanf(in_fp, "%s", &businessNumber);

	fprintf(out_fp, "4.4. ���� ���\n> ");

	string result = control->cancelApply(businessNumber);
	fprintf(out_fp, result.c_str());

	fprintf(out_fp, "\n");
}

/*
  �Լ� �̸� : ApplyInfoUI::selectCancel(string businessNumber)
  ���	   : ���� ��� ��� ����
  ���� ���� : string businessNumber
  ��ȯ��    : ����
*/

void ApplyCancelUI::setControl(ApplyCancel* control) {
	this->control = control;
}