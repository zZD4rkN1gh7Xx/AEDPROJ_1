#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<string>
#include <unordered_map>
#include <student.h>
#include <vector>
#include "subject.h"
#include <unordered_map>

class Course
{
    private:
        unordered_map<int , Student> studentMap;
        unordered_map<int, Subject> Subjects;

    public:
        Course();
        Student getStudent(int studentCode);
        void getAllStudents();
        void addStudent(Student student);
        void addSubject(Subject subject);
        

};

#endif