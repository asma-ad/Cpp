#include <iostream>
using namespace std;

int main()
{
    // Piggy Bank Calculator
    float penny, nickel, dime, quarter, dollar;
    cout << "Pennies: ";
    cin >> penny;
    cout << "Nickel: ";
    cin >> nickel;
    cout << "Dime: ";
    cin >> dime;
    cout << "Quarter: ";
    cin >> quarter;
    cout << "Dollar: ";
    cin >> dollar;

    float total_pennies = penny * 1 + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    float total_dollars = total_pennies / 100;

    cout << total_pennies << " Pennies" << endl;
    cout << total_dollars << " Dollars" << endl;

    return 0;
}