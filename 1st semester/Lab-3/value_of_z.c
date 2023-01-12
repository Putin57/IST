/*
Question : take x,y,k,w input and find the value of z without error 
*/

#include<stdio.h>
int main(){
    int x,y,k,w;
    float z;
    printf("Enter the value x,y,k,w : ");
    scanf("%d %d %d %d",&x,&y,&k,&w);
    if (y!=z)
    {
        z = (x-k)/(float)(y-w);
        printf("The result of z : %.2f",z);
    }
    else
    {
        printf("Error");
    }
    return 0;
}