#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    if(a>b){
        printf("a is bigger");
    }else if(b>a){
    printf("b is bigger");
    }else{
         printf("both are equal");
         }

    }
