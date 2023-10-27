#ifndef CLASS_H
#define CLASS_H

#include "Subject.h"
#include <string>

class Class
{
    private:
        int classCode_;
        std::string day_;
        int time_;
        int duration_;
        std::string type_;

    public:
        Class(int code);
        Class();
        void setDay(std::string day);
        void setTime(int time);
        void setDuration(int duration);
        void setType(std::string type);
        int getClassCode(void);
        std::string getDay(void);
        int getTime(void);
        int getDuration(void);
        std::string getType(void);

};

#endif