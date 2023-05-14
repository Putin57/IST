//write a C program to find sum of two matrices of size 3X3
#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    int a[3][3],b[3][3];
    puts("########## The summation of 3X3 matrices ##########");
    printf("\n");
    printf("Enter the 1st matrix below:\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the 2nd matrix below:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The summation of 1st and 2nd matrix below:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);

        }printf("\n");
    }
    return 0;
}
