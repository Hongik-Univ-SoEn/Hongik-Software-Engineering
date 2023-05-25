#include "ApplyUI.h"

#define MAX_STRING 32

void ApplyUI::applyToRecruit(string businessNumber,IndividualMember* individualMember) {
    vector <string> result = this->applyControl->addApply(businessNumber,individualMember);
    
    fprintf(out, "4.2. 채용 지원\n>");
    for (auto str : result) {
        fprintf(out, " %s", str);
    }
    fprintf(out, "\n\n");
}

void ApplyUI::startInterface() {
    char businessNumber[MAX_STRING];
    fscanf(in, "%s", businessNumber);

    // this is a act of an actor
    applyToRecruit(string(businessNumber), (IndividualMember*)IndividualMember::getInstance());
}

void ApplyUI::setApply(Apply* applyControl) {
    this->applyControl = applyControl;
}

void ApplyUI::setOutFile(FILE* out) {
    this->out = out;
}

void ApplyUI::setInFile(FILE* in) {
    this->in = in;
}