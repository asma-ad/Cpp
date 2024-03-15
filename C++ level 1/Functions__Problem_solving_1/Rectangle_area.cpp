#include <iostream>
using namespace std;

int rectangle_area(int a, int b) {

    return a * b;  
}

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << rectangle_area(a,b);
    
    return 0;
}