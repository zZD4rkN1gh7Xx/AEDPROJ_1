#ifndef SUBJECT_H
#define SUBJECT_H

#include<iostream>
#include<string>
#include <vector>
#include "class.h"
#include <unordered_map>

using namespace std;

class Subject
{
    private:

        int Code_;
        unordered_map<int, Class> subjectClasses;

    
    public:
        Subject(int code);
        int getCode();
        void addClass(int classCode, Class class_);
        // adicionar mais funçoes relevantes
};

#endif

