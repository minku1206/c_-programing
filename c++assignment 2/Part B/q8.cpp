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
    if(a==b){
        if(b==c){
            cout<<"Equilateral triangle";
        }else {
            cout<<"Isosceles triangle";
        }
    }else{
        if(a==c || b==c){
            cout<<"Isosceles triangle";
        }else{
            cout<<"Scalene triangle";
        }
    }
    return 0;
}
