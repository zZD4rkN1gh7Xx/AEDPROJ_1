#include "Schedule.h"
#include <iostream>
#include <vector>
#include "Subject.h"



Schedule::Schedule()
{

}
void Schedule::showSchedule()
{
    // ainda tenho de fazer um show schedule
}

void Schedule::addSubject(Subject subject)
{
    schedule_.push_back(subject);
}
void Schedule::removeSubject( Subject subject)
{
    auto it = schedule_.begin();
    while (it != schedule_.end()) 
    {
        if (it->getCode() == subject.getCode() ) 
        {
            it = schedule_.erase(it);
            break;
        } 
        it++;
    }
}
