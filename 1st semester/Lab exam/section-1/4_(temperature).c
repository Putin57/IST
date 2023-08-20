#include<stdio.h>
int main(){
    float fah,cel;
    printf("\n### Convert the given temperature in Fahrenheit to Celsius ###\n");
    printf("\nEnter the Fahrenheit number: ");
    scanf("%f",&fah);
    cel=((fah-32)/9)*5;
    printf("\nCelcious: %.2f",cel);
    return 0;
}
