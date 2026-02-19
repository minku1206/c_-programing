#include <iostream>
using namespace std;
int main(){
    float basic;
    float hra;
    float da;
    float other;
    float gross;
    cout<<"Enter basic salary:";
    cin>>basic;
    cout<<"Enter value of hra :";
    cin>>hra;
    cout<<"Enter value of da :";
    cin>>da;
    cout<<"Enter value of other allowance:";
    cin>>other;
    gross=basic+hra+da+other;
    cout<<"Gross salary ="<<gross;
    return 0;
}
