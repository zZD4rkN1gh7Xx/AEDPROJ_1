#include "class.h"
#include <iostream>
#include <string>

using namespace std;

Class::Class(int code)
{
    this->classCode_ = code;
}

void Class::setDay(string day)
{
    this->day_ = day;
}
void Class::setTime(int time)
{
    this->time_ = time;
}
void Class::setDuration(int duration)
{
    this->duration_ = duration;
}
void Class::setType(string type)
{
    this->type_ = type;
}

int Class::getClassCode(void)
{
    return classCode_;
}

string Class::getDay(void)
{
    return day_;
}

int Class::getTime(void)
{
    return time_;
}

int Class::getDuration(void)
{
    return duration_;
}

string Class::getType(void)
{
    return type_;
}