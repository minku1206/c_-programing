#include <iostream>
using namespace std;
int main(){
    int n;
    int fact;
    int i;
    cout<<"Enter number :";
    cin>>n;
    for(i=0; i<n; i=i+1){
    fact=fact+i;
    }
    cout<<"Factorial = "<<fact;
}
