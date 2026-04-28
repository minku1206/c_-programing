#include <iostream>
using namespace std;
int main(){
    int i;
    int j;

    for(i=1; i<=500; i=i+1){
            int sum=0;
        for(j=1 ; j<i; j=j+1){
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
            cout<<i<<" ";
    }

}
