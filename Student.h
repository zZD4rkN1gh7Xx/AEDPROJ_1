#ifndef STUDENT_H
#define STUDENT_H

#include"Subject.h"
#include<iostream>
#include<string>
#include<vector>
#include "Schedule.h"



class Student
{
    private:
        std::string name_;
        int studentCode_;
        Schedule schedule_; // trocar para um schedule //////
    
    public:
        Student(int studentCode, std::string name);
        std::string getName();
        int getStudentCode();
        void addSchedule(Schedule schedule); // ainda falta pensar em como e que vou por este a entrar nos subjects e ver as suas coisas

};

#endif