#ifndef SUBJECT_H
#define SUBJECT_H

#include<iostream>
#include<string>
#include <vector>
#include "Course.h"

#include "Class.h"
#include <unordered_map>


class Subject
{
    private:

        int Code_;
        std::unordered_map<int, Class()> subjectClasses;

    
    public:
        Subject();
        Subject(int code);
        int getCode();
        void addClass(int classCode, Class class_);
        // adicionar mais funçoes relevantes
};

#endif

