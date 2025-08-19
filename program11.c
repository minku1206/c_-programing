#include <stdio.h>
int main(){
    int n;
    int r;
    printf("enter a number");
    scanf("%d",&n);
    r=n%2;
    if(r%2==0){
        printf("yes");
    }else{
    printf("no");
    }
}
