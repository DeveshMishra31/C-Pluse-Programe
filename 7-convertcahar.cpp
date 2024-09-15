#include <iostream>
using namespace std;
int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
    }

    cout << "The converted character is: " << ch << endl;

    return 0;
}
