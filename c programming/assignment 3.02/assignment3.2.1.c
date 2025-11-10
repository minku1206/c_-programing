#include <stdio.h>
int main(){
    //Declaring variable
    int a;
    int b;
    int c;
    int D;
    int root1;
    int root2;
    int real;
    float imaginary;

    //Take input coefficients of a b and c
    printf("Enter coefficient of a: ");
    scanf("%d",&a);
    printf("Enter coefficient of b: ");
    scanf("%d",&b);
    printf("Enter coefficient of c: ");
    scanf("%d",&c);

    //Calculate discriminant
    D=b^2-4*a*c;

    //Check condition
    if(D>0){
        root1=(-b+b^2)/2*a;
        root2=(-b-b^2)/2*a;
        printf("%d %d roots are real and distinct\n",root1,root2);
    }else if(D==0){
        root1=-b/2*a;
        root2=-b/2*a;
        printf("%d %d roots are real and equal\n",root1,root2);
    }else{
        real=-b/2*a;
        imaginary=(-D)^2/2*a;
        printf("%f roots are complex (imaginary): root1=(%d + %d) and root=(%d - %d)\n",real,imaginary,real,imaginary);
    }

}
