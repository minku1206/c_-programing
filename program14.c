#include <stdio.h>
int main(){
    int m;
    printf("enter a number");
    scanf("%d",&m);
    if(m>90){
        printf("A");
    }
    if(m<90 && m>80){
            printf("B");
    }
    if(m<80 && m>70){
        printf("C");
    }
    if(m<70 && m>60){
        printf("D");
    }
    if(m<60 && m>50){
        printf("E");
    }
}
