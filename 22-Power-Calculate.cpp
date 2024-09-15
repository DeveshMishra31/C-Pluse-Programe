#include <iostream>
using namespace std;

// Recursive function to calculate x^y
double power(double x, int y) {
    if (y == 0)
        return 1;  // Base case: any number raised to the power 0 is 1
    if (y > 0)
        return x * power(x, y - 1);  // Recursive case for positive powers
    else
        return 1 / power(x, -y);  // Handle negative powers
}

int main() {
    double base;
    int exponent;

    // Input base and exponent
    cout << "Enter the base (x): ";
    cin >> base;
    cout << "Enter the exponent (y): ";
    cin >> exponent;

    // Calculate and display the result
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    return 0;
}
