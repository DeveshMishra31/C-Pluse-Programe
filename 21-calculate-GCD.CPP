#include <iostream>
using namespace std;

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;  // Base case: if b is 0, return a
    return gcd(b, a % b);  // Recursive case: gcd(b, a % b)
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    return 0;
}
