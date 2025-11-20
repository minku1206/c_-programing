#include <stdio.h>
int main(){
    //Declaring variables
    int total_minutes;
    int hours;
    int minutes;

    //Take input
    printf("Enter the total number of minutes: ");
    scanf("%d",&total_minutes);

    //Calculate hours
    hours=total_minutes/60;

    //Calculate minutes
    minutes=total_minutes%60;

    //print result
    printf("%d\n",hours);
    printf("%d\n",minutes);
}
