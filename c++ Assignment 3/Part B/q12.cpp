#include <iostream>
using namespace std;
int main(){
int a;
int b;
int i;
int j;
int prime;

cout<<"Enter value of a :";
cin>>a;
cout<<"Enter value of b :";
cin>>b;
for(i=a; i<=b; i=i+1){
    if(i<=1)
        prime=0;
    for(j=2; j=i/2; j=j+1){
        if(i%j==0){
            prime=0;
            break;
        }
    }
    if(prime){
        cout<<i<<" ";
    }
}
}
