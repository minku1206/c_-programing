#include <stdio.h>
int main(){
    //Declaring variables
    int m;
    int n;

    //Take input as integer
    printf("Enter the first value: ");
    scanf("%d",&m);

    //Check condition
    if(m>1){
        n=1;
        printf("m is greater than 0\n",n);
    }else if(m==0){
        n=0;
        printf("m is equal to 0\n",n);
    }else{
        n=-1;
        printf("m is less than 0\n",n);
    }

}
