#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void loadDataFileToVector(string fileName, vector<string> &vFilecontent)
{
    fstream file;
    file.open("file.txt", ios::in); 
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            vFilecontent.push_back(line);
        }
        file.close();
    }
}
int main()
{
    vector <string> vFilecontent;
    loadDataFileToVector("file.txt", vFilecontent);

    for (string &line : vFilecontent)
    {
        cout << line << endl;
    }

    return 0;
}