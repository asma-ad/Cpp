#include <iostream>
#include "lib.h"
using namespace std;

// Create my own library : lib.hs

int main()
{
    cout << input::readPositiveNumber("Enter a positive number: ");
    return 0;
}