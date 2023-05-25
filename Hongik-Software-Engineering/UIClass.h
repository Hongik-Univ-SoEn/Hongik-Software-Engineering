#ifndef _UICLASS_H_
#define _UICLASS_H_

#include <iostream>
#define MAX_STRING 32

class UIClass {
public :

	void setFileToRead(FILE* in_fp);

	void setFileToWrite(FILE* out_fp);

	void setFilePointer(FILE* in_fp, FILE* out_fp);

protected :
	FILE* in_fp;
	FILE* out_fp;
};

#endif //_UICLASS_H_