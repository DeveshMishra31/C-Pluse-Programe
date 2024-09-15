#include <iostream>
#include <stack> // To use stack for storing binary digits
using namespace std;

int main() {
    int decimalNumber;
    stack<int> binaryDigits; // Stack to store binary digits

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber == 0) {
        cout << "The binary equivalent of " << decimalNumber << " is: 0" << endl;
    } else {
        // Convert decimal to binary
        while (decimalNumber > 0) {
            int remainder = decimalNumber % 2;
            binaryDigits.push(remainder);
            decimalNumber /= 2;
        }

        // Display binary equivalent
        cout << "The binary equivalent is: ";
        while (!binaryDigits.empty()) {
            cout << binaryDigits.top();
            binaryDigits.pop();
        }
        cout << endl;
    }

    return 0;
}
