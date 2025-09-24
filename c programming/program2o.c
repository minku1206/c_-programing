#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    printf("Enter the third value: ");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("Valid triangle");
    }else{
        printf("Invalid triangle");
    }
}
