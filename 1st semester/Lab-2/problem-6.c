/*question: Swap two number
must show befor swap and after swap*/

#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Enter x,y value : ");
    scanf("%d %d",&x,&y);
    printf("Before swap the value of x, y: %d, %d",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swap value of x, y : %d, %d",x,y);

    return 0;
}