/*author:sivapriya😁
date:26/03/2025
Using Macros: Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder. Use macros for constant values.*/
#include<stdio.h>
#define pi 3.14159
int main(){
float circle_area,cylinder_area;
int r,h;
printf("enter the radius of circle and height of cylinder");
scanf("%d%d",&r,&h);
circle_area=pi*r*r;
cylinder_area=2*pi*r*r+2*pi*r*h;
printf("circle area=%f",circle_area);
printf("cylinder area=%f",cylinder_area);
return 0;
}
