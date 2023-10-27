#include "course.h"

Course::Course()
{

}

void Course::addStudent(Student student)
{
    studentMap[student.getStudentCode()] = student; // falta ver se da para adicionar a pessoa
}

Student Course::getStudent(int studentCode)
{
    return studentMap[studentCode];
}

void Course::getAllStudents()
{
 // deixar para pensar mais tarde como e que vou apresentar todos os alunos
}

void Course::addSubject(Subject subject)
{
    Subjects[subject.getCode()] = subject;
}

bool Course::SubjectExists(Subject subject)
{
    
}