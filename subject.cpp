#include "subject.h"
#include <iostream>
#include <string>

using namespace std;

Subject::Subject(int code)
{
    this->Code_ = code;
}

int Subject::getCode()
{
    return Code_;
}

void Subject::addClass(int classCode, Class class_)
{
    subjectClasses[classCode] = class_;
}