#include <stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%3==0){
        if(n%7==0){
            printf("divisible by 3 and 7");
        }
    }
}
