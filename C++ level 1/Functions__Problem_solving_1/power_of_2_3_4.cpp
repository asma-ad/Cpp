#include <iostream>
#include <cmath>
using namespace std;

void power_classic(float number)
{
    /*
        cout << pow(number,2) << endl
         << pow(number,3) << endl
         << pow(number,4) << endl;
    */
    float poower_of_two = number * number;           
    float poower_of_three = poower_of_two * number;  
    float poower_of_four = poower_of_three * number;

    cout << poower_of_two << endl
         << poower_of_three << endl
         << poower_of_four << endl;
}

int main()
{
    float number;

    cout << "Enter a number: ";
    cin >> number;

    power_classic(number);

    return 0;
}