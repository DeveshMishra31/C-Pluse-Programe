#include <iostream>
#include <cmath> 
using namespace std ;

int main() {
    
    int num1, num2;
   
   cout << "Enter the first number: ";
    cin >> num1;

     cout << "Enter the second number: ";
    cin >> num2;

    int distance = abs(num1 - num2);

    cout << "The distance between " << num1 << " and " << num2 << " is: " << distance << endl;

    return 0;
}
