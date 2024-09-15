#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159; // Value of Pi
    return PI * radius * radius; // Area formula: πr²
}

int main() {
    double radius;

    // Taking radius input from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calling the function to calculate area
    double area = calculateArea(radius);

    // Displaying the result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
