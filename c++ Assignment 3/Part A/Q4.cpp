#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int sum;
    cout<<"Enter natural number :";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum = "<<sum;
    return 0;
}
