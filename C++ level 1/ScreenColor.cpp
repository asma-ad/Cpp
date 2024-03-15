#include <iostream>
using namespace std;

enum enScreenColor
{
    Red = 1,
    Blue = 2,
    Green = 3,
    Yello = 4
};

void printChoices()
{
    cout << "*********************************\n";
    cout << "Please choose the number of your color:\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "*********************************\n";
}

void read_color(short &color)
{
    cout << "Color: ";
    cin >> color;
}

void change_color(enScreenColor color)
{
    if (color > 4 || color < 1)
        cout << "Wrong number!";

    else if (color == enScreenColor::Red)
        system("Color 4F");

    else if (color == enScreenColor::Blue)
        system("Color 1F");

    else if (color == enScreenColor::Green)
        system("Color 2F");

    else
        system("Color 6F");
}

int main()
{
    short c;
    printChoices();
    read_color(c);
    enScreenColor color = (enScreenColor)c;
    change_color(color);

    return 0;
}