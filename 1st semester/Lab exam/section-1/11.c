#include<stdio.h>
int main(){
    long long n,x,count=0,num=0;
    printf("Enter the number: ");
    scanf("%lld",&n);
    while(n>0){
        x=n%10;
        count+=x;
        num=(num*10)+x;
        n/=10;
    }
    printf("Reverse of the number: %lld\n",num);
    printf("Total of the digit: %lld",count);
    return 0;
}