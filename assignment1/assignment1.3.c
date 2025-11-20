#include <stdio.h>
int main(){
    //Declaring variable
    int kilometers;
    float meters;
    int feet;
    int inches;
    int centimeters;

    //Take input distance in kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%d",&kilometers);

    //calculate meters
    meters=kilometers*1000;

    //calculate feet
    feet=meters*3.28084;

    //calculate centimeters
    centimeters=kilometers*100000;

    //print result
    printf("%f meters\n",meters);
    printf("%d feet\n",feet);
    printf("%d inches\n",inches);
    printf("%d centimeters\n",centimeters);

}
