#include <iostream>
using namespace std;

// Procedure , Function

void displayMyCard()
{
    cout << "**********************************\n";
    cout << "Name: Shreen\n";
    cout << "Age: 32 years old\n";
    cout << "City: Jerusalem \\ Qudus\n";
    cout << "Country: Palestine\n";
    cout << "**********************************\n";
}

void printSqaureStars()
{
    cout << "********\n"
         << "********\n"
         << "********\n"
         << "********\n";
}

void printIloveProgramming()
{
    cout << "I love programming!" << endl
         << endl;
    cout << "I promise to be the best developer ever!" << endl
         << endl;
    cout << "I know it will take some time to practice, but I will achieve my goal." << endl
         << endl;
    cout << "Best regards," << endl
         << "AJ" << endl;
}

void print_H()
{
    cout << "*    *" << endl
         << "*    *" << endl
         << "******" << endl
         << "*    *" << endl
         << "*    *" << endl;
}

int main()
{
    displayMyCard();
    cout << endl;

    printSqaureStars();
    cout << endl;

    printIloveProgramming();
    cout << endl;

    print_H();

    return 0;
}