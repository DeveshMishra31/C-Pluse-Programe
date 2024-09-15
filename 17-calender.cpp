#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

int main() {
    int startDay, numDays;

    cout << "Enter the start day of the month (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> startDay;
    cout << "Enter the number of days in the month: ";
    cin >> numDays;

    // Display the header for the calendar
    cout << "Su Mo Tu We Th Fr Sa" << endl;

    // Print spaces for the initial empty days
    for (int i = 0; i < startDay; i++) {
        cout << "   "; // Print spaces for alignment
    }

    // Print the days of the month
    for (int day = 1; day <= numDays; day++) {
        cout << setw(2) << day << " "; // Print each day with a width of 2 characters

        // Move to the next line after Saturday
        if ((startDay + day) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl; // Ensure the output ends with a newline

    return 0;
}
