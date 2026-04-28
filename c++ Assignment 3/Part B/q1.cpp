#include <iostream>
using namespace std;
int main(){
   int n;
   int t;
   int rev=0;
   cout<<"Enter number :";
   cin>>n;
   while(n!=0){
    rev=rev*10+n%10;
    n=n/10;
   }
   if(t==rev){
    cout<<"Palindrome";
   }else{
       cout<<"Not Palindrome";
   }
}
