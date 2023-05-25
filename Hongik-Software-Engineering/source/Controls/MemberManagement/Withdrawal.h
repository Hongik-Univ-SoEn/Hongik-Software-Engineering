/**
 * Project 채용 정보 시스템
 */


#ifndef _WITHDRAWAL_H
#define _WITHDRAWAL_H

#include "../../Boundaries/MemberManagement/WithdrawalUI.h"

class Withdrawal {
public:

	bool withDrawal();

	void start();

	void setUI(WithdrawalUI* ui);

private :
	WithdrawalUI* ui;
};

#endif //_WITHDRAWAL_H