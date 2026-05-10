#include <iostream>
#include <string>
#include "PPP_support.h"

using namespace std;

int main()
{
    cout << "Enter three integers:\n";
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c && b > c) {
        cout << "The order is: " << c << ", " << b << ", " << a << ".\n";
    }
    else if (b > a && b > c && a > c) {
        cout << "The order is: " << c << ", " << a << ", " << b << ".\n";
    }
    else if (c > a && c > b && a > b) {
        cout << "The order is: " << b << ", " << a << ", " << c << ".\n";
    }
    else if (a > b && b > c) {
        cout << "The order is: " << c << ", " << b << ", " << a << ".\n";
    }
    else if (b > a && a > c) {
        cout << "The order is: " << c << ", " << a << ", " << b << ".\n";
    }
    else if (c > a && a > b) {
        cout << "The order is: " << b << ", " << a << ", " << c << ".\n";
    }
    else {
        cout << "The numbers are not distinct.\n";
    }
}