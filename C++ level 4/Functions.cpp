#include <iostream>
using namespace std;

// declaration
int sum(int, int, int c = 0, int d = 0); // assigning  default values to c and d
int add(int a, int b);
int add(double a, double b);
int add(int a, int b, int c);
void function4();
void function3();
void function2();
void function();

int main()
{
    cout << sum(2, 8) << endl;
    cout << sum(2, 8, 6) << endl;
    cout << sum(2, 8, 6, 1) << endl;

    // Function overloading:
    add(1, 2);
    add(1, 2, 3);
    add(10.1, 10.2);

    // Call stack - Call hierarchy
    function();

    return 0;
}

// definitions
int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

// Functions (overloading)
int add(int a, int b)
{
    return (a + b);
}

int add(double a, double b)
{
    return (a + b);
}

int add(int a, int b, int c)
{
    return (a + b + c);
}

// Call stack - Call hierarchy
void function4()
{
    cout << "I'm function 4! " << endl;
}

void function3()
{
    function4();
}

void function2()
{
    function3();
}

void function()
{
    function2();
}
