#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "\nAddresses are : \n";
    /*
     cout << ptr << endl;       // arr[0]
     cout << (ptr + 1) << endl; // arr[1]
     cout << (ptr + 2) << endl; // arr[2]
     cout << ptr + 3 << endl;   // arr[3]
     cout << ptr + 4 << endl;   // arr[4]
    */
    for (int i = 0; i < 4; i++)
    {
        cout << (i + ptr) << endl;
    }

    cout << "\nValues are : \n";
    /*
    cout << *ptr << endl;       // arr[0] = 10
    cout << *(ptr + 1) << endl; // arr[1] = 20
    cout << *(ptr + 2) << endl; // arr[2] = 30
    cout << *(ptr + 3) << endl; // arr[3] = 40
    cout << *(ptr + 4) << endl; // arr[4] = 50
    */
    for (int i = 0; i < 4; i++)
    {
        cout << *(i + ptr) << endl;
    }

    return 0;
}