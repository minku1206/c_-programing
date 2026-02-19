#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    char op;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Enter operators(+,-,*,/) :";
    cin>>op;
    switch(op){
    case '+':
        cout<<"a+b : ";
        break;
    case '-':
        cout<<"a-b : "<<op;
        break;
    case '*':
        cout<<"a*b : "<<op;
        break;
    case '/':
        cout<<"a/b : "<<op;
        break;
    default :
        cout<<"Invalid";
    }
    return 0;
}
