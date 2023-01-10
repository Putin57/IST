//Question: Findout Minimum & Maximum number of two value

#include<stdio.h>
int main(){
    int a,b,min,max;
    printf("Enter Min & Max value: ");
    scanf("%d %d",&a,&b);
    max = (a>b)?a:b;
    min = (a<b)?a:b;
    printf("Max = %d",max);
    printf("\nMin = %d",min);
    return 0;
}