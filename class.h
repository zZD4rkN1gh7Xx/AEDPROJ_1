#ifndef CLASS_H
#define CLASS_H

#include "subject.h"
#include <string>

class Class
{
    private:
        int classCode_;
        string day_;
        int time_;
        int duration_;
        string type_;

    public:
        Class(int code);
        void setDay(string day);
        void setTime(int time);
        void setDuration(int duration);
        void setType(string type);
        int getClassCode(void);
        string getDay(void);
        int getTime(void);
        int getDuration(void);
        string getType(void);

};

#endif