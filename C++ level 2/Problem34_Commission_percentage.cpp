#include <iostream>
using namespace std;
/*
Problem #34:
Write a program to ask user to enter: Total sales.

The commission is calculated as one percentage * the total sales amount,
all you nedd is to decide which percentage using the following:
1M => 1%
500K to 1M => 2%
100K to 500K => 3%
50K to 100K => 5%
Otherwise => 0%
*/

float readTotalSales()
{
    float total_sales;
    cout << "Enter the total sales: ";
    cin >> total_sales;
    return total_sales;
}

float getCommission_Percentage(float total_sales)
{
    if (total_sales >= 1000000)
        return 0.01;
    else if (total_sales >= 500000)
        return 0.02;
    else if (total_sales >= 100000)
        return 0.03;
    else if (total_sales >= 50000)
        return 0.05;
    else
        return total_sales * 0;
}

float calculateTotalCommission(float total_sales)
{
    return getCommission_Percentage(total_sales) * total_sales;
}

int main()
{
    float total_sales = readTotalSales();
    cout << "\nCommission percentage: " << getCommission_Percentage(total_sales) << endl;
    cout << "Total commission: " << calculateTotalCommission(total_sales) << endl;
    return 0;
}