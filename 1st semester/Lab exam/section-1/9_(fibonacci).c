#include <stdio.h>
int main(){
    int n;
    printf("Enter number(only positive): ");
    scanf("%d",&n);
    int x=0,y=1;
    printf("The first %d Fibonacci numbers : ",n);
    if(n==1){
        printf("%d\n",x);}
    else{
        printf("%d ",x);
        printf("%d ",y);
    for(int i=2;i<n;i++){
        int z=x+y;
        printf("%d ",z);       
        x=y;
        y=z;
        }
    }
    printf("\n");
    return 0;
}
