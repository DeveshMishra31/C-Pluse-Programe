#include <iostream>

using namespace std;

int main() {
    int integerNumber;
    
    
    cout << "Enter an integer: ";
    cin >> integerNumber;

    
    float floatNumber = static_cast<float>(integerNumber);

    
    double doubleNumber = static_cast<double>(integerNumber);

    cout << "The integer as a floating-point number (float): " << floatNumber << endl;
    cout << "The integer as a floating-point number (double): " << doubleNumber << endl;

    return 0;
}
