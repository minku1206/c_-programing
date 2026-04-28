#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    for(i=0; i<=4; i=i+1){
        for(j=0; j<=i; j=j+1){
            cout<<"* ";
        }
        cout<<endl;
    }
}
