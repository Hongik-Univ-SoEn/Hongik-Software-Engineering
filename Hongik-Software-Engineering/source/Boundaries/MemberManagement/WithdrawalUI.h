/**
 * Project 채용 정보 시스템
 */


#ifndef _WITHDRAWALUI_H
#define _WITHDRAWALUI_H

#include "../../../UIClass.h"
#include "../../Controls/MemberManagement/Withdrawal.h"

class WithdrawalUI : public UIClass {
public:

	void startInterface();

	void setControl(Withdrawal* control);

private :
	Withdrawal* control;
};

#endif //_WITHDRAWALUI_H