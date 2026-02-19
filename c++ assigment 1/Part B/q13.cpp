#include <iostream>
using namespace std;
int main(){
    int first_angle;
    int second_angle;
    int third_angle;
    cout<<"Enter value of first angle :";
    cin>>first_angle;
    cout<<"Enter value of second angle :";
    cin>>second_angle;
    third_angle=180-(first_angle+second_angle);
    cout<<"Third Angle ="<<third_angle;
    return 0;
}
