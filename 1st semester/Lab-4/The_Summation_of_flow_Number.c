/*
Question: write the summation of : 1+2^-2+3^-3+4^-4+5^-5+....n^-n
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    float total=0;
    for(int i=1;i<=n;i++){
        float num=pow(i,-i);
        total+=num;
    }
    printf("The summation of number : %f",total);
    return 0;
}