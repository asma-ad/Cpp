#include <iostream>
using namespace std;

int main()
{
    int num1 = 12, num2 = 3;
    printf("The first number is %d, and the second one is %d\n", num1, num2);
    printf("The result of  %d + %d = %d\n", num1, num2, num1 + num2);
    printf("\nThe number %d == %0*d\n", num2, 2, num2); // Width specification
    printf("The number %d == %0*d\n", num2, 4, num2);

    float fl_number = 3.14159265;
    printf("The number %f is float\n", fl_number);
    printf("The number %.*f is float\n", 3, fl_number);
    printf("The number %.2f is float\n", fl_number);

    char name[] = "Cpp";
    printf("Hello! I am %s\n", name);
    char letter = 'C';
    printf("Hello! I am %c\n", letter);

    return 0;
}