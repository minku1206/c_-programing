#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Enter value of c :";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater";
    }else if(b>a && b>c){
        cout<<"b is greater";
    }else{
        cout<<"c is greater";
    }
    return 0;
}
