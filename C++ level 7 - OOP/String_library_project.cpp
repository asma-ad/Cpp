#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{

    clsString string1;
    clsString string2("HellO cLass! lEt's coDe");

    cout << "\nBefore\n"
         << string2.getValue();

    string2.lowerAllString();
    
    cout << "\nAfter\n"
         << string2.getValue();

    return 0;
}