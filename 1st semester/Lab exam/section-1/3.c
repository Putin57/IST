#include<stdio.h>
int main(){
    float length,wide;
    printf("\nEnter the Length of rectangle: ");
    scanf("%f",&length);
    printf("\nEnter the wide of wide: ");
    scanf("%f",&wide);
    printf("\nThe area of rectangle: %.2f\n",length*wide);
    printf("\n");
    printf("The perimeter of rectangle: %.2f",2*(length+wide));
    return 0;
}
