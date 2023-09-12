#include<stdio.h>
int main(){
    int n;
    printf("Enter the number(positive only): ");
    scanf("%d",&n);
    int x=0,y=1;
    printf("The first %d fibonacci series is : ",n);
    if(n==1){
        printf("%d\n",x);
    }else if(n==2){
        printf("%d ",x);
        printf("%d ",y);
        printf("\n");
    }else{
        printf("%d ",x);
        printf("%d ",y);
        for(int i=2;i<n;i++){
            int z=x+y;
            printf("%d ",z);
            x=y;y=z;
        }
        printf("\n");
    }
    return 0;
}
