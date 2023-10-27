#include "Class.h"
#include "Course.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"
#include "reader.cpp"


int main(int argc, char* argv[])
{
    if(argc >= 2)
    {
        const std::string inputFileName = argv[1];
        read(inputFileName);
        return 0;
    }

    return 1;

}
