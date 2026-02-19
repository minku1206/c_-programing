#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping : a ="<<a<<"b ="<<b;
    return 0;

}
