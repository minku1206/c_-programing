#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int n=3;
    for(i=0; i<=2; i=i+1){
            for(j=0; j<=n-i; j=j+1){
                cout<<" ";
            }
        for(j=0; j<=i; j=j+1){
            cout<<"* ";
        }
        cout<<endl;
    }
}
