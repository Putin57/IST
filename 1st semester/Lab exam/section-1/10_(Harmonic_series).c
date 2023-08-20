/*
Question: write the summation of : 1+2^-2+3^-3+4^-4+5^-5+....n^-n
*/

#include<stdio.h>
#include<math.h>
int main(){
    float n,i;
    float num,total=0;
    printf("Enter the Number: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        num=pow(i,-i);
        total+=num;
    }
    printf("The summation of number : %.5f",total);
    return 0;
}
