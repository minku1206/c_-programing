#include <iostream>
#include <cmath>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int a, n;
    double sum = 1;
    double t;
    int sign = -1;

    cin >> a >> n;

    for (int i = 2; i <= 2 * n; i = i + 2) {
        t = sign * (pow(a, i)) / fact(i);
        sum = sum + t;
        sign = -sign;
    }

    cout << sum;
    return 0;
}
