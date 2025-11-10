#include <stdio.h>
int main(){
    char grade;

    printf("Enter grade E,V,G,A,F: ");
    scanf("%c",&grade);

    if(grade=='E' || grade=='e'){
        printf("Excellent\n");
    }else if(grade=='v' || grade=='v'){
        printf("Very Good\n");
    }else if(grade=='G' || grade=='g'){
        printf("Good\n");
    }else if(grade=='A' || grade=='a'){
        printf("Average\n");
    }else{
        printf("Fail");
    }
}
