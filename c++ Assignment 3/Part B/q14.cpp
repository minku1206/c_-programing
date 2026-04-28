#include <iostream>
using namespace std;
int main(){
int n;
int i;
int j;
int prime;
cout<<"Enter number :";
cin>>n;
for(i=n-1; i>=2; i=i-1){
    prime=1;
    for(j=2; j<=i/2; j=j+1){
            if(i%j==0){
        prime=0;
        break;
            }
    }
    if(prime){
        cout<<i;
        break;
    }
}
}
