#include <stdio.h>
int main(){
    //Declaring variables
    int a;
    int b;
    int c;
    int sum;

    //Take input
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    printf("Enter the third value: ");
    scanf("%d",&c);

    //Calculate sum
    sum=a+b+c;

    //print result
    printf("%d",sum);
}
