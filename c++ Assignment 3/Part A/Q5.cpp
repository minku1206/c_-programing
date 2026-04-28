#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"Enter value of n :";
    cin>>n;
    for(i=0; i<10; i=i+1){
        n=n*i;
        cout<<n*i;
    }
}
