#include <stdio.h>
int main(){
    //Declaring variable
    float radius;
    float pi=3.14;
    float area;
    float perimeter;

    //Take input of radius and value pi
    printf("Enter the value of radius of circle: ");
    scanf("%f",&radius);
    printf("Enter the value of pi: ");
    scanf("%f",&pi);

    //calculate perimeter
    perimeter=2*pi*radius;

    //calculate area
    area=pi*radius;

    //print result
    printf("%f",perimeter);
    printf("%f",area);

}
