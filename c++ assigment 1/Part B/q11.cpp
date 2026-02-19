#include <iostream>
using namespace std;
int main(){
    int marks1;
    int marks2;
    int marks3;
    int total;
    float percent;
    cout<<"Enter marks in subject 1 :";
    cin>>marks1;
    cout<<"Enter marks in subject 2 :";
    cin>>marks2;
    cout<<"Enter marks in subject 3 :";
    cin>>marks3;
    total=marks1+marks2+marks3;
    cout<<"Total ="<<total<<"\n";
    percent=(total/3);
    cout<<"Percentage = "<<percent<<"\n";
    return 0;
}
