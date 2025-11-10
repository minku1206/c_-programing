#include <stdio.h>
int main(){
    float temperature;

    printf("Enter temperature in centigrade: ");
    scanf("%f",&temperature);

    if(temperature<0){
        printf("freezing weather\n",temperature);
    }else if(0-10){
        printf("very cold weather\n",temperature);
    }else if(10-20){
        printf("cold weather\n",temperature);
    }else if(20-30){
        printf("normal in temperature",temperature);
    }else if(30-40){
        printf("it's hot",temperature);
    }else{
        print("it's very hot",temperature);
    }
}
