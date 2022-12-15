//Question-1: find out the area of circle & circumference 

#include<stdio.h>
#define PI 3.1416
float main(){
float r,Area;
printf("Enter Radius : ");
scanf("%f",&r);
Area=PI*r*r;
printf("The area of circle: %f\n",Area);
printf("The circumference: %f\n",2*PI*r);
return 0;
}