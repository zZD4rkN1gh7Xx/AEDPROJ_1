#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "subject.h"
#include "class.h"
#include <iostream>
#include <vector>

class Schedule
{
    private:
        vector<Subject> schedule_;

    public:
        Schedule();
        void showSchedule();
        void addSubject(Subject subject);
        void removeSubject(Subject subject);
        // fazer uma funçao para ordenar a schedule por ordem de dias e horas
        // falta tambem pensar como e que se vai fazer a schedule em si
        // so quando resolver os 2 primeiros exeis e que se faz isto (classes.csv e classes_per_uc.csv)

};

#endif