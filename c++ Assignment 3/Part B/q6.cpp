#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"Enter number :";
    cin>>n;
    for(i=0; i<=n; i=i+1){
        if(i%2==0){
            cout<<"Prime";
        }else{
            cout<<"Not prime";
        }
    }
}
