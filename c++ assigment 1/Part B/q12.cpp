#include <iostream>
using namespace std;
int main(){
    float r;
    float area;
    float circum;
    float pi=3.14;
    cout<<"Enter value of radius :";
    cin>>r;
    area=pi*r*r;
    cout<<"Area ="<<area<<"\n";
    circum=2*pi*r;
    cout<<"Circumference ="<<circum;
    return 0;

}
