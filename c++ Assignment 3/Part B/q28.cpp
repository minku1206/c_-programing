#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    char ch;
    for(i=1; i<=5; i=i+1){
            ch='A';
        for(j=1; j<=i; j=j+1){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
