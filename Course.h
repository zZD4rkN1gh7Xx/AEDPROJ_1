#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "Student.h"
#include <vector>
#include "Subject.h"
#include <unordered_map>

class Course
{
    private:
        std::unordered_map<int , Student> studentMap;
        std::unordered_map<int, Subject> Subjects;

    public:
        Course();
        Student getStudent(int studentCode);
        void getAllStudents();
        void addStudent(Student student);
        void addSubject(Subject subject);
        

};

#endif