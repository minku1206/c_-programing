#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int sum = 0;
    int max = -999;
    int min = 999;

    while (true) {
        cout << "Enter number: ";
        cin >> n;

        if (n == -1) {
            break;
        }

        count = count + 1;
        sum = sum + n;

        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }

    if (count > 0) {
        cout << "Count = " << count << endl;
        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
        cout << "Average = " << (float)sum / count;
    } else {
        cout << "No numbers entered";
    }

    return 0;
}
