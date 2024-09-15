#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int largest;

    cout << "Enter 10 numbers: " << endl;

    // Read 10 numbers from the user
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Initialize the largest number to the first number
    largest = numbers[0];

    // Find the largest number using the ternary operator
    for (int i = 1; i < 10; i++) {
        largest = (numbers[i] > largest) ? numbers[i] : largest;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
