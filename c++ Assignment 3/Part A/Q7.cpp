#include <iostream>
using namespace std;
int main(){
    int n;
    int rev;
    cout<<"Enter number :";
    cin>>n;
    while(n!=0){
        rev=n*10+n%10;
        n=n/10;
    }
    cout<<"Reverse = "<<rev;
}
