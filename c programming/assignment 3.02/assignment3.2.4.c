#include <stdio.h>
int main(){
    int side1;
    int side2;
    int side3;

    printf("Enter length of side 1 of triangle: ");
    scanf("%d",&side1);
    printf("Enter length of side 2 of triangle: ");
    scanf("%d",&side2);
    printf("Enter length of side 3 of triangle: ");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3){
        printf("equilateral triangle\n");
    }else if(side1==side2 || side2==side3 || side3==side1){
        printf("isosceles triangle\n");
    }else{
        printf("scalene triangle\n");
    }
}
