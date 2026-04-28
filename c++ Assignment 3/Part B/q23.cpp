#include <iostream>
using namespace std;

int main() {
    int count = 0, sum = 0;

    for(int i = 100; i <= 200; i++) {
        if(i % 9 == 0) {
            count++;
            sum = sum+ i;
        }
    }

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum;
    return 0;
}
