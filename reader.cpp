#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Class.h"
#include "Course.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"


void read(const std::string fileName)
{
    std::ifstream inputFile(fileName);

    if(inputFile.is_open())
    {
        std::string line;
        while(getline(inputFile,line))
        {
            std::string UcCode, ClassCode;
            std::istringstream ss(line);

            if(getline(ss,UcCode,',') && getline(ss, ClassCode))
            {
                std::cout << UcCode << "! " << ClassCode << std::endl;
            }

        }
       
       inputFile.close();
    }

    else
    {
        std::cerr << "Error to open :" << fileName << std::endl;
    }
}

