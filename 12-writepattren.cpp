#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';  // Reset the character to 'A' for each row

        for (int j = 1; j <= i; j++) {  // Inner loop to print characters
            cout << ch;
            ch++;  // Move to the next character
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
