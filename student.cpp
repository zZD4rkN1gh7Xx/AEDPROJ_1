#include "student.h"

#include<iostream>
#include<string>
#include<vector>

using namespace std;

Student::Student(int studentCode, string name)
{
    this->studentCode_ = studentCode;
    this->name_ = name;
}

string Student::getName()
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