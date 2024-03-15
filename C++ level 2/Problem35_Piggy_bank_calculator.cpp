#include <iostream>
using namespace std;
/*
Problem #35:
Write a program to ask user to enter: Pennies, Nickels, Dimes, Quarters, Dollars
Then, calculate the total pennies, and total dollars, and print them on screen.

Penny =1
Nickel = 5 (pennies)
Dime => 10 (pennies)
Quarter = 25 (pennies)
Dollar = 100 (pennies)
*/

struct stCurrency
{
    float penny, nickel, dime, quarter, dollar;
};

stCurrency readCurrency()
{
    stCurrency curreny;

    cout << "Pennies: ";
    cin >> curreny.penny;

    cout << "Nickel: ";
    cin >> curreny.nickel;

    cout << "Dime: ";
    cin >> curreny.dime;

    cout << "Quarter: ";
    cin >> curreny.quarter;

    cout << "Dollar: ";
    cin >> curreny.dollar;

    return curreny;
}

float getPennies(stCurrency curreny)
{
    return (curreny.penny * 1) + (curreny.nickel * 5) + (curreny.dime * 10) + (curreny.quarter * 25) + (curreny.dollar * 100);
}

int main()
{
    float total_pennies = getPennies(readCurrency());

    cout << "Total pennies: " << total_pennies << endl;
    cout << "Total dollars: " << total_pennies / 100 << endl;

    return 0;
}