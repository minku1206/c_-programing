#include <stdio.h>
int main(){
    int angle1;
    int angle2;
    int angle3;
    int sum;

    printf("Enter angle 1 of triangle: ");
    scanf("%d",&angle1);
    printf("Enter angle 2 of triangle: ");
    scanf("%d",&angle2);
    printf("Enter angle 3 of triangle: ");
    scanf("%d",&angle3);

    sum=angle1+angle2+angle3;

    if(angle1+angle2+angle3==180){
       printf("triangle is valid\n");
    }else{
        printf("triangle is invalid\n");
    }
}
