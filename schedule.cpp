#include "schedule.h"
#include <iostream>
#include <vector>
#include "subject.h"

using namespace std;

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
