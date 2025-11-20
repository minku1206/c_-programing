#include <stdio.h>
int main(){
    //Declaring variables
    int x;
    int y;

    //Take input
    printf("Enter x-coordinate: ");
    scanf("%d",&x);
    printf("Enter y-coordinate: ");
    scanf("%d",&y);

    //Check conditions
    if(x>0 && y>0){
        printf("%d%d point lies in quadrant 1.\n",x,y);
    }else if(x<0 && y>0){
        printf("%d%d point lies in quadrant 2.\n",x,y);
    }else if(x<0 && y<0){
        printf("%d%d point lies in quadrant 3.\n",x,y);
    }else if(x>0 && y<0){
        printf("%d%d point lies in quadrant 4.\n",x,y);
    }else{}
        printf("%d%d point lies in origin.\n",x,y);

}
