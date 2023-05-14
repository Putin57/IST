#include <stdio.h>
int main(){
    int n,i;
    int fib1=0,fib2=1,fib3;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The first %d Fibonacci numbers are:\n",n);
    printf("%d %d ",fib1,fib2);
    for(i=3;i<=n;i++){
        fib3=fib1+fib2;
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    printf("\n");
    return 0;
}
