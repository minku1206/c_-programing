#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int digit;
    cout<<"Enter number :";
    cin>>n;
    while(n!=0){
            digit=n%10;
            sum=sum+digit;
            n=n/10;
    }
    cout<<"Sum of Digit = "<<sum;
}
