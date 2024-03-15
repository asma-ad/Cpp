#include <iostream>
using namespace std;

enum enCountry
{
    Morocco = 1,
    Algeria = 2,
    Tunisia = 3,
    Libya = 4,
    Mauritania = 5
};

void printChoices()
{
    cout << "***********************************************\n";
    cout << "\nUnited states of Maghreb \\ Maghreb countries\n\n";

    cout << "***********************************************\n";
    cout << "Please choose the number of your country:\n";
    cout << "(1) Morocco\n";
    cout << "(2) Algeria\n";
    cout << "(3) Tunisia\n";
    cout << "(4) Libya\n";
    cout << "(5) Mauritania\n";
    cout << "***********************************************\n";
}

void read_country(short &country)
{
    cout << "Country: ";
    cin >> country;
}

void what_country(enCountry country)
{
    if (country > 5 || country < 1)
        cout << "Wrong number!";

    switch (country)
    {
    case enCountry::Morocco:
        cout << "Welcome Morocco";
        break;

    case enCountry::Algeria:
        cout << "Welcome Algeria";
        break;

    case enCountry::Tunisia:
        cout << "Welcome Tunisia";
        break;

    case enCountry::Libya:
        cout << "Welcome Libya";
        break;

    case enCountry::Mauritania:
        cout << "Welcome Muritania";
        break;
    }
}

int main()
{
    short number;

    printChoices();

    read_country(number);

    enCountry country = (enCountry)number;
    what_country(country);

    return 0;
}