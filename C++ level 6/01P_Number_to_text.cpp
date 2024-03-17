#include <iostream>
using namespace std;
/*
Problem #01:
Write a program to read a number and print the text of that number.
*/

int readNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

string numberToText(int number)
{
    // zero
    if (number == 0)
    {
        return "";
    }
    // 1 to 19
    else if (number >= 1 && number <= 19)
    {
        string arr[] = {
            "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        return arr[number] + " ";
    }
    // 20 to 99
    else if (number >= 20 && number <= 99)
    {
        string arr[]{
            "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        return arr[number / 10] + " " + numberToText(number % 10);
    }
    // 100 to 199
    else if (number >= 100 && number <= 199)
    {
        return "One Hundred " + numberToText(number % 100);
    }
    // 200  to 999
    else if (number >= 200 && number <= 999)
    {
        return numberToText(number / 100) + "Hundreds " + numberToText(number % 100);
    }
    // 1000 to 1999
    else if (number >= 1000 && number <= 1999)
    {
        return "One Thousand " + numberToText(number % 1000);
    }
    // 2000 to 999999
    else if (number >= 2000 && number <= 999999)
    {
        return numberToText(number / 1000) + "Thousands " + numberToText(number % 1000);
    }
    // 1000000 to 1999999
    else if (number >= 1000000 && number <= 1999999)
    {
        return "One Million " + numberToText(number % 1000000);
    }
    // 2000000 to 999999999
    else if (number >= 2000000 && number <= 999999999)
    {
        return numberToText(number / 1000000) + "Millions " + numberToText(number % 1000000);
    }
    // 1000000000 to 1999999999
    else if (number >= 1000000000 && number <= 1999999999)
    {
        return "One Billion" + numberToText(number % 1000000000);
    }
    // Billions
    else
    {
        return numberToText(number / 1000000000) + "Billions " + numberToText(number % 1000000000);
    }
}

int main()
{

    int number = readNumber();
    cout << numberToText(number) << endl;

    return 0;
}