#include <stdio.h>
int main(){
  int choice;

  printf("select a geometrical shape to compute area:\n");
  printf("1. Circle\n");
  printf("2. Rectangle\n");
  printf("3. Triangle\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch(choice){
  case 1:
    int radius;
    float area;
    float pi=3.14;
    printf("Enter radius of circle: ");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("area of circle is %f",area);
    break;
  case 2:
    int length;
    int width;
    printf("Enter length of rectangle: ");
    scanf("%d",&length);
    printf("Enter width of rectangle: ");
    scanf("%d",&width);
    area=length*width;
    printf("area of circle is %f",area);
    break;
  case 3:
    int base;
    int height;
    printf("Enter base of triangle: ");
    scanf("%d",&base);
    printf("Enter height of triangle: ");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("area of triangle is %f",area);
    break;
  default:
    printf("Invalid option selected.");
    break;
  }
  return 0;
}
