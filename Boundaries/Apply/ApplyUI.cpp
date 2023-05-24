

#include "ApplyUI.h"


void ApplyUI::setApply(Apply* apply){
    this->apply = apply;
}


void ApplyUI::applyToRecruit(string businessNumber,IndividualMember* individualMember) {
   
    Apply* apply = this->apply;
    vector <string> result = apply->addApply(businessNumber,individualMember);
    int len = result.size();
    for (int i = 0;i<len;i++){
        cout<<result[i]<<endl;
    }
}


void ApplyUI::startInterface() {

}