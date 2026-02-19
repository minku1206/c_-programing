#include <iostream>
using namespace std;
int main(){
float p;
float r;
float t;
float si;
cout<<"Enter value of principal:";
cin>>p;
cout<<"Enter value of rate:";
cin>>r;
cout<<"Enter value of time:";
cin>>t;
si=(p*r*t)/100;
cout<<"Simple interest ="<<si;
return 0;
}
