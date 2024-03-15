#include <iostream>
#include <cstdlib>
using namespace std;

enum enRandType
{
    small_letter = 0,
    capital_letter = 1,
    special_char = 2,
    digit = 3
};

int randomNumbers(int from, int to)
{
    return (rand() % (to - from - 1) + from);
}

char randomCharacter(enRandType type)
{
    switch (type)
    {
    case enRandType::small_letter:
        return (char)randomNumbers(97, 122);
    case enRandType::capital_letter:
        return (char)randomNumbers(65, 90);
    case enRandType::special_char:
        return (char)randomNumbers(33, 47);
    case enRandType::digit:
        return (char)randomNumbers(48, 57);

    default:
        break;
    }
}

int main()
{
    srand(time(NULL));

    cout << randomCharacter(enRandType::small_letter) << endl;
    cout << randomCharacter(enRandType::capital_letter) << endl;
    cout << randomCharacter(enRandType::special_char) << endl;
    cout << randomCharacter(enRandType::digit) << endl;

    return 0;
}