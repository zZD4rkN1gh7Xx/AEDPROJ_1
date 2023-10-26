#ifndef STUDENT_H
#define STUDENT_H

#include"subject.h"
#include<iostream>
#include<string>
#include<vector>
#include "schedule.h"

using namespace std;

class Student
{
    private:
        string name_;
        int studentCode_;
        Schedule schedule_; // trocar para um schedule //////
    
    public:
        Student(int studentCode, string name);
        string getName();
        int getStudentCode();
        void addSchedule(Schedule schedule); // ainda falta pensar em como e que vou por este a entrar nos subjects e ver as suas coisas

};

#endif