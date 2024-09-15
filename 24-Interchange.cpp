#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables to track the indices of the smallest and largest elements
    int maxIndex = 0, minIndex = 0;

    // Traverse the array to find the indices of the largest and smallest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;  // Update maxIndex if a larger element is found
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;  // Update minIndex if a smaller element is found
        }
    }

    // Swap the largest and smallest elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Display the modified array
    cout << "Array after interchanging the largest and smallest elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
