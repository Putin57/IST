//write a C program to find sum of two matrices of size 3X3
#include<stdio.h>
int main(){
    int a[3][3],b[3][3];
    printf("Enter the first matrix below:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    printf("Enter the 2nd matrix below: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }printf("\n");
    printf("The summation of two matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }printf("\n");
    }
    
    return 0;
}
