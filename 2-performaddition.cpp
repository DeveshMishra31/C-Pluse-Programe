#include <iostream>

using namespace std;

int main() {
    int num1, num2;


    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    
    int addition = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;


    int subtraction = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;


    int multiplication = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << multiplication << endl;


    if (num2 != 0) {
        int division = num1 / num2;
        cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
    return 0;
}

   
