#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i<=20; i=i+1){
        if(i==14)
            continue;
        if(i==18)
            break;
        cout<<i<<" ";
    }
}
