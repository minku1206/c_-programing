#include <stdio.h>
int main(){
    int day_number;

    printf("Enter day number(1-7): ");
    scanf("%d",&day_number);

    switch(day_number){
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Error input is not within the valid range");
    }
    return 0;
}
