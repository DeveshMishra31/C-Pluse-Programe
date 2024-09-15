#include <iostream>
using namespace std;
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()



int main() {
    int n;

    // Input the number of random numbers to generate
    cout << "Enter the number of random numbers to generate: ";
    cin >> n;

    // Create an array to store the random numbers
    int arr[n];

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate and store random numbers in the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Generate random numbers between 0 and 99
    }

    // Display the generated random numbers
    cout << "Generated random numbers are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
