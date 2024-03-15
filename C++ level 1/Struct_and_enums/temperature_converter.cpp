#include <iostream>
using namespace std;
/*
Create an enum called TemperatureUnit with cases for Celsius, Fahrenheit, and Kelvin.
Write a function that can convert temperatures from one unit to another.
*/

enum TemperatureUnit
{
    Celsius,
    Fahrenheit,
    Kelvin
};

double convertTemperature(double temperature, TemperatureUnit fromUnit, TemperatureUnit toUnit)
{
    if (fromUnit == toUnit)
    {
        return temperature; // No conversion needed
    }

    double convertedTemperature;

    // Implement conversion formulas based on fromUnit and toUnit
    if (fromUnit == Celsius)
    {
        if (toUnit == Fahrenheit)
        {
            convertedTemperature = temperature * 9 / 5 + 32; // Celsius to Fahrenheit
        }
        else if (toUnit == Kelvin)
        {
            convertedTemperature = temperature + 273.15; // Celsius to Kelvin
        }
    }
    else if (fromUnit == Fahrenheit)
    {
        if (toUnit == Celsius)
        {
            convertedTemperature = (temperature - 32) * 5 / 9; // Fahrenheit to Celsius
        }
        else if (toUnit == Kelvin)
        {
            convertedTemperature = (temperature - 32) * 5 / 9 + 273.15; // Fahrenheit to Kelvin
        }
    }
    else if (fromUnit == Kelvin)
    {
        if (toUnit == Celsius)
        {
            convertedTemperature = temperature - 273.15; // Kelvin to Celsius
        }
        else if (toUnit == Fahrenheit)
        {
            convertedTemperature = (temperature - 273.15) * 9 / 5 + 32; // Kelvin to Fahrenheit
        }
    }

    return convertedTemperature;
}

int main()
{
    double temperature = 25.0;
    TemperatureUnit fromUnit = Celsius;
    TemperatureUnit toUnit = Fahrenheit;

    double convertedTemperature = convertTemperature(temperature, fromUnit, toUnit);

    cout << "Converted Temperature: " << convertedTemperature << endl;

    return 0;
}
