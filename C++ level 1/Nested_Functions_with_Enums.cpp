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

enCountry read_country()
{
    short num_of_country;
    cout << "Country: ";
    cin >> num_of_country;

    return (enCountry)num_of_country;
}

string what_country(enCountry country)
{
    if (country > 5 || country < 1)
        return "Wrong number!";

    switch (country)
    {
    case enCountry::Morocco:
        return "Welcome Morocco";
        break;

    case enCountry::Algeria:
        return "Welcome Algeria";
        break;

    case enCountry::Tunisia:
        return "Welcome Tunisia";
        break;

    case enCountry::Libya:
        return "Welcome Libya";
        break;

    case enCountry::Mauritania:
        return "Welcome Muritania";
        break;
    }
}

int main()
{

    printChoices();
    cout << what_country(read_country());

    return 0;
}