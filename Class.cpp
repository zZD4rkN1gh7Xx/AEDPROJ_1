#include "Class.h"
#include <iostream>
#include <string>

Class::Class(){};
Class::Class(int code)
{
    this->classCode_ = code;
}

void Class::setDay(std::string day)
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
void Class::setType(std::string type)
{
    this->type_ = type;
}

int Class::getClassCode(void)
{
    return classCode_;
}

std::string Class::getDay(void)
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

std::string Class::getType(void)
{
    return type_;
}