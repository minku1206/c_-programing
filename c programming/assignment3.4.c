#include <stdio.h>
int main(){
    //Declaring variable
    int a;
    int b;
    int c;

    //Take input
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    //Check condition
    if(a>b && b>a){
        printf("%d is largest number.\n",a);
    }else if(b>c && c>b){
        printf("%d is largest number.\n",b);
    }else{
        printf("%d is largest number.\n",c);
    }


}
