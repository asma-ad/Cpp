#include <iostream>
#include "lib.h"
using namespace std;

string isPositive()
{
    int number = input::readNumber();
    return (number == 0) ? "Zero" : (number > 0) ? "Positive"
                                                 : "Negative";
}

int main()
{
    // Positive or Negative or zero
    cout << isPositive();

    return 0;
}