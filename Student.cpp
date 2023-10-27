#include "Student.h"

#include<iostream>
#include<string>
#include<vector>



Student::Student(int studentCode, std::string name)
{
    this->studentCode_ = studentCode;
    this->name_ = name;
}

std::string Student::getName()
{
    return name_;
}
int Student::getStudentCode()
{
    return studentCode_;
}

void Student::addSchedule(Schedule schedule)
{
    this->schedule_ = schedule;
}