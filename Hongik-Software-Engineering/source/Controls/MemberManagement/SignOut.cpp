/**
 * Project 채용 정보 시스템
 */


#include "SignOut.h"
#include "../../Entities/Member.h"

void SignOut::start() {
	ui->startInterface();
}

bool SignOut::doSignOut() {
	Member::setInstance(nullptr);

	return true;
}

void SignOut::setUI(SignOutUI* ui) {
	this->ui = ui;
	ui->setControl(this);
}