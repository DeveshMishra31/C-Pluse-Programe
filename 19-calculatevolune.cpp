#include <iostream>
using namespace std;

// Function to calculate the volume of a cuboid with default arguments
double calculateVolume(double length = 1.0, double width = 1.0, double height = 1.0) {
    return length * width * height;
}

int main() {
    double length, width, height;

    // Taking dimensions of the cuboid from the user
    cout << "Enter the length of the cuboid (or press Enter for default 1.0): ";
    cin >> length;
    cout << "Enter the width of the cuboid (or press Enter for default 1.0): ";
    cin >> width;
    cout << "Enter the height of the cuboid (or press Enter for default 1.0): ";
    cin >> height;

    // Calculating the volume using the function with default values
    double volume = calculateVolume(length, width, height);

    // Displaying the result
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}
