#include <iostream>
using namespace std;

int main()
{

    int *ptrX;
    float *ptrY;

    // dynamic allocate memory
    ptrX = new int;
    ptrY = new float;

    // assigning walues
    *ptrX = 11;
    *ptrY = 2.5;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deallocate memory
    delete ptrX;
    delete ptrY;

    return 0;
}