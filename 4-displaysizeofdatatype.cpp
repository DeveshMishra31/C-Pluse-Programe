#include <iostream>

using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char16_t: " << sizeof(char16_t) << " bytes" << endl;
    return 0;
}
