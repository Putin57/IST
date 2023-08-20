#include<stdio.h>
int main(){
    int n,i,total=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        total*=i;
    }
    printf("Factorial of %d is: %d",n,total);
    return 0;
}
