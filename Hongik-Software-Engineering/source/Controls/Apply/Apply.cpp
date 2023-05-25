#include "Apply.h"


/*
    함수 이름 : Apply::addApply
    기능   : 특정 사업자 번호를 갖고 있는 채용 정보를 받아와서, 채용 정보의 지원자 수를 증가시키고 개인 회원의 지원 정보 리스트에 추가해줌.
    전달 인자 : string businessNumber(회사이름), IndividualMember individualMember(개인 회원.)
    반환값    : vector<string>타입으로 반환되며, 반환되는 내용은 회사이름, 사업자 번호, 업무이다.
*/


vector<string> Apply::addApply(string businessNumber, IndividualMember* individualMember) {
	/// 컨트롤 객체가 가지고 있는 recruitCollection으로부터 함수를 호출해 특정 회사 이름을 가지고 있는 채용 정보(Recruit)을 반환
	Recruit* recruit = RecruitCollection::getInstance()->findRecruitByBusinessNumber(businessNumber);
	/// recruitCollection으로부터 받은 채용 정보의 지원자 수를 +1 해서 recruit객체의 지원자 수를 설정
	recruit->setNumsOfApply(recruit->getNumsOfApply() + 1);
	////  individualMember객체의 addToApplyList 함수를 호출하면서 변경된 recruit 객체를 전달
	individualMember->addToApplyList(recruit);

	vector<string> result;
	result.push_back(recruit->getCompanyName());  //// 사용자가 지원한 채용 정보의 회사 이름을 반환
	result.push_back(recruit->getBusinessNumber()); /// 사용자가 지원한 채용 정보의 사업자 번호를 반환
	result.push_back(recruit->getWorkField());  /// 사용자가 지원한 채용 정보의 직무를 반환.
	return result;
}