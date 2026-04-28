#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int gcd;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    while(a!=b){
        if(a>b){
         a=a-b;
        }else{
            b=b-a;
        }
    }
    cout<<a;
}
