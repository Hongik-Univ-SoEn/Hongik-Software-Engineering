
#include "UIClass.h"
/*
    함수 이름 : UIClass::setFileToRead(FILE* in_fp)
    기능    : input file 저장,
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void UIClass::setFileToRead(FILE* in_fp) {
	this->in_fp = in_fp;
}

/*
    함수 이름 : UIClass::setFileToWrite(FILE* out_fp) 
    기능    : output file 저장.
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void UIClass::setFileToWrite(FILE* out_fp) {
	this->out_fp = out_fp;
}

/*
    함수 이름 : UIClass::setFilePointer(FILE* in_fp, FILE* out_fp) 
    기능    : input file과 output file의 file pointer를 저장.
    전달 인자 : Recruit 클래스의 포인터 객체
    반환값    : 없음
*/
void UIClass::setFilePointer(FILE* in_fp, FILE* out_fp) {
	this->in_fp = in_fp;
	this->out_fp = out_fp;
}