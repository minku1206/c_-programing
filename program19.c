#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter first side: ");
    scanf("%d",&a);
    printf("Enter second side: ");
    scanf("%d",&b);
    printf("Enter third side: ");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("Equilateral");
    }else if(a==b || b==c){
        printf("Isoceles");
    }else{
        printf("Scalene");
    }
}
