// Write a source code in C to calculate Celcious to Fahrenheit temparetore conversion & vice versa.

#include <stdio.h>

float main(){
    float C,F,Fahrenheit,Celcious;
    printf("Input Celcious : ");
    scanf("%f",&C);
    Fahrenheit = ((C*9)/5)+32;
    printf("Output Fahrenheit = %.2f\n",Fahrenheit);
    printf("Input Farhenheit : ");
    scanf("%f",&F);
    Celcious = (((F-32)/9)*5);
    printf("Output Celcious = %.2f\n",Celcious);
    return 0;
}