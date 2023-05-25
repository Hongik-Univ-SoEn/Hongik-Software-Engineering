/**
 * Project 채용 정보 시스템
 */


#include "MemberSignUp.h"

bool MemberSignUp::doSignUp(vector<string> signUpInfo) { return false; }

void MemberSignUp::start() { }

int MemberSignUp::getType() {
	return ui->typeOfSignUp();
}

void MemberSignUp::setUI(MemberSignUpUI* ui) {
	this->ui = ui;
	ui->setControl(this);
}