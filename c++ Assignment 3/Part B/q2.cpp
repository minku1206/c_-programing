#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int r;
    int t;
    cout<<"Enter number :";
    cin>>n;
    t=r;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==t){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
}
