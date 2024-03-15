#include <iostream>
using namespace std;

// Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.

int sumOfDigits(int number)
{
    // 123 => 1 + 2 + 3 == 6
    if (number >= 0 && number < 10)
        return number;
    else
        return (number % 10) + sumOfDigits(number / 10);
}

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    int sum = sumOfDigits(n);
    cout << "\nSum of digits " << n << " is : " << sum << endl;

    return 0;
}