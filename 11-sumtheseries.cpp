#include <iostream>
#include <cmath>  // for pow()

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i) / i;  // Adding i^i / i
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
