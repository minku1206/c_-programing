#include <iostream>
using namespace std;
int main(){
   int a;
   int b;
   int result;
   cout<<"Enter a:";
   cin>>a;
   cout<<"Enter b:";
   cin>>b;
   result=(a*a+2*a*b+b*b);
   cout<<"(a+b)^2 ="<<result;
   return 0;
}
