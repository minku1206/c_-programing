#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / pow(i, i);
    }

    cout << "Sum = " << sum;
    return 0;
}

