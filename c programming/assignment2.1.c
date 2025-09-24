#include <stdio.h>
int main(){
    float centigrade;
    float fahrenheit;

    //Take input
    printf("Enter the value of centigrade: ");
    scanf("%f",&centigrade);

    //Calculate fahrenheit
    fahrenheit=(9*centigrade)/5+32;

    //print result
    printf("%f",fahrenheit);

}
