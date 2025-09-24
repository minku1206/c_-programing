#include <stdio.h>
int main(){
    float radius;
    float volume;
    float pi=3.14;

    //Take input as radius
    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    //Calculate volume
    volume=(4*pi*radius*radius*radius)/3;

    //Print result
    printf("%f",volume);
}
