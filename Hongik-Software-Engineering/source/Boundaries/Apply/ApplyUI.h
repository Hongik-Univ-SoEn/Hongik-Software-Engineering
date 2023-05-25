/**
 * Project 채용 정보 시스템
 */

#ifndef _APPLYUI_H
#define _APPLYUI_H
#include "../../Entities/IndividualMember.h"
#include "../../Controls/Apply/Apply.h"

class ApplyUI {
public:

	void applyToRecruit(string businessNumber, IndividualMember* individualMember);

	void startInterface();

	void setApply(Apply* applyControl);
	void setOutFile(FILE* out);
	void setInFile(FILE* in);

private:
	Apply* applyControl;
	FILE* in;
	FILE* out;
};

#endif //_APPLYUI_H