#include <iostream>
#include <iomanip>
using namespace std;
// Setw Manipulator

int main()
{
    cout << "----------|-------------------------------|-------------" << endl;
    cout << "   Code   |             Name              |    Mark    " << endl;
    cout << "----------|-------------------------------|-------------" << endl;

    cout << left << setw(10) << "01"
         << "|" << setw(31) << "Intro to CS"
         << "|" << setw(13) << "95" << endl;
    cout << setw(10) << "05"
         << "|" << setw(31) << "Computer Hardware"
         << "|" << setw(13) << "60" << endl;
    cout << setw(10) << "352"
         << "|" << setw(31) << "Network"
         << "|" << setw(13) << "73" << endl;
    cout << setw(10) << "10235"
         << "|" << setw(31) << "System operation"
         << "|"
         << setw(13) << "75" << endl;

    cout << "----------|-------------------------------|-------------" << endl;

    return 0;
}