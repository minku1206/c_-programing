#include <stdio.h>
int main(){
    //Declaring variable
    int year;

     //Take input
    printf("Enter a year: ");
    scanf("%d",&year);

    //Check leap year
    if((year%4==0)&&(year%100==0)||(year%400!=0)){
        printf("%d is leap year",year);
    }else{
        printf("%d is not leap year",year);
    }

}
