#include <stdio.h>
int main(){
    //Declaring variable
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    int aggregate_marks;
    float percentage;

    //Take input marks of students
    printf("Enter marks for subject 1 (out of 100): ");
    scanf("%d",&subject1);
    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%d",&subject2);
    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%d",&subject3);
    printf("Enter marks for subject 4 (out of 100): ");
    scanf("%d",&subject4);
    printf("Enter marks for subject 5 (out of 100): ");
    scanf("%d",&subject5);

    //Calculate aggregate marks
    aggregate_marks=subject1+subject2+subject3+subject4+subject5;

    //Calculate percentage
    percentage=aggregate_marks/5;

    //print result
    printf("%d\n",aggregate_marks);
    printf("%f\n",percentage);
}
