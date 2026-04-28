#include <iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=1;
    int c;
    int i;

    cin>>n;
    for(i=0; i<=n; i=i+1){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
