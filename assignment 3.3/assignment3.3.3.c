#include <stdio.h>
int main(){
    float sp;
    float cp;
    float profit_loss;

    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);

    profit_loss=sp-cp;

    if(sp>cp){
        printf("profit amount %f",profit_loss);
    }else if(sp<cp){
        printf("loss amount %f",profit_loss);
    }else{
        printf("there is no profit or loss",profit_loss);
    }
    return 0;
}
