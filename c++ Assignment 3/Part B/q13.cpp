#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int fact=0;
    cout<<"Enter number :";
    cin>>n;
    for(i=0; i<=n; i=i+1){
        fact=fact+i;
    }
    cout<<fact;
}

