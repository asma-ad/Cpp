#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    int &r = a;  // reference
    int *p = &a; // pointer

    cout << "Variable value  (a) : " << a << endl;
    cout << "Reference value (r) : " << r << endl;
    cout << "Pointer value   (p) : " << *p << endl;

    cout << "\n\n";

    // This will print out the same address.
    cout << "(r) : " << &r << endl;
    cout << "(a) : " << &a << endl;
    cout << "(p) : " << p << endl;
    /*
        r and a has the same address. r is just another name (an alias) for a.
        p content is the address of a.
        to get the address of pointer istelf use : &
    */
    cout << "Address of pointer  : " << &p << endl;

    p = &b;
    r = b;

    cout << "Variable value  (b) : " << b << endl;
    cout << "Reference value (r) : " << r << endl;
    cout << "Pointer value   (p) : " << *p << endl;

    return 0;
}