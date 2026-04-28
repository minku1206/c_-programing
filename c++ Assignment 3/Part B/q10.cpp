#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1;i<=n; i=i+1){
        sum=sum+i;
    }
    cout<<"Sum = "<<sum;
}
