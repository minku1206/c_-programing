#include <stdio.h>
int main(){
    //Declaring variable
    int hours;
    int minutes;
    int total_minutes;

    //Take input
    printf("Enter the hours: ");
    scanf("%d",&hours);
    printf("Enter the minutes: ");
    scanf("%d",&minutes);

    //Calculate total minutes
    total_minutes=hours*60+minutes;

    //Print result
    printf("%d",total_minutes);
}
