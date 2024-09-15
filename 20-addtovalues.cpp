#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add a double and an integer
double add(double a, int b) {
    return a + b;
}


int main() {
    // Adding two integers
    cout << "Add two integers: " << add(10, 20) << endl;

    // Adding a double and an integer
    cout << "Add double and integer: " << add(5.5, 10) << endl;

    

    return 0;
}
