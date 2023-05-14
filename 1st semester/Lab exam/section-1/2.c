#include<stdio.h>
#define PI 3.14156
int main(){
    float r,area,s;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("\nThe circumference of circle : ");
    printf("%.2f\n",2*PI*r);
    printf("\n");
    printf("The area of circle: ");
    printf("%.2f\n",PI*r*r);
    printf("\n");
    return 0;
}