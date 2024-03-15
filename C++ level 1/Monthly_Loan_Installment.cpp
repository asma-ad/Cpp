#include <iostream>
using namespace std;

int main()
{
    // Monthly Loan Installment
    int loan_amount, months;
    cout << "Loan amount: ";
    cin >> loan_amount;
    cout << "Months: ";
    cin >> months;

    int monthly_amount = loan_amount / months;
    cout << monthly_amount;

    return 0;
}