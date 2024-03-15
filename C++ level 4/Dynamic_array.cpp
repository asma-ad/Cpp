#include <iostream>
using namespace std;

int main()
{

    int number = 0;
    cout << "Enter the length of array: ";
    cin >> number;

    float *ptr = new float[number];

    for (int i = 0; i < number; i++)
    {
        cout << "Enter number [" << i + 1 << "] :  ";
        cin >> *(ptr + i);
    }

    cout << "Numbers:\n";
    for (int i = 0; i < number; i++)
    {
        cout << *(ptr + i) << " ";
    }

    delete[] ptr;

    return 0;
}