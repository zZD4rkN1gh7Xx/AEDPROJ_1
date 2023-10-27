#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void read1(const string fileName) // funçao que trabalha com o ficheiro das Uc e class code
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
                // aqui envex de ser para dar cout e suposto criar novos subjects se nao existirem e as turmas de cada subject
                // ou seja
                // 
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
        read1(inputFileName);
        return 0;
    }

    return 1;

}