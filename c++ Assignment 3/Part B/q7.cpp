#include <iostream>
using namespace std;
int main (){
    int n;
    int i;
    int j;

    cout<<"Enter number :";
    cin>>n;
    for(i=2; i<=100; i=i+1){
            int count=0;
        for(j=1; j<=i; j=j+1){
            if(i%j==0)
                count=count+1;
        }
        if(count==2)
            cout<<i<<" ";
    }
}
