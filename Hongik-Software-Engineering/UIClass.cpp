
#include "UIClass.h"

void UIClass::setFileToRead(FILE* in_fp) {
	this->in_fp = in_fp;
}

void UIClass::setFileToWrite(FILE* out_fp) {
	this->out_fp = out_fp;
}

void UIClass::setFilePointer(FILE* in_fp, FILE* out_fp) {
	this->in_fp = in_fp;
	this->out_fp = out_fp;
}