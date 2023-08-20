#include<stdio.h>
int main(){
    int n,a,aux[32],i=0;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    while(n>0){
        aux[i]=n%2;
        n/=2;
        i++;
    }
    printf("\nDecimal to Binary: ");
    for(a=i-1;a>=0;a--){
        printf("%d",aux[a]);
    }
    printf("\n");
return 0;
}
