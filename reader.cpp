#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void read(const string fileName)
{
    ifstream inputFile(fileName);

    if(inputFile.is_open())
    {
        string line;
        while(getline(inputFile,line))
        {
            string UcCode, ClassCode;
            istringstream ss(line);

            if(getline(ss,UcCode,',') && getline(ss, ClassCode))
            {
                cout << UcCode << "! " << ClassCode << endl;
            }

        }
       
       inputFile.close();
    }

    else
    {
        cerr << "Error to open :" << fileName << endl;
    }
}

int main(int argc, char* argv[])
{
    if(argc >= 2)
    {
        const string inputFileName = argv[1];
        read(inputFileName);
        return 0;
    }

    return 1;

}