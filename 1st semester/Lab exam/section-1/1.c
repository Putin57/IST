#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("\nEnter Three sides of a triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    float peri=a+b+c;
    printf("The perimeter of triangle: %.2f",peri);
    float area,s=peri/2;
    area=s*(s-a)*(s-b)*(s-c);
    printf("\n");
    printf("\nThe area of triangle: ");
    printf("%.2f\n",pow(area,0.5));
    printf("\n");
    return 0;
}