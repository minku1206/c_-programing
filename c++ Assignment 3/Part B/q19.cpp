
#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int j;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (i = 1; i <= n; i=i+1) {
        int temp = 0;

        for (j = 1; j <= i; j=j+1) {
            temp = temp + j;
        }

        sum = sum + temp;
    }

    cout << "Sum = " << sum;
    return 0;
}
