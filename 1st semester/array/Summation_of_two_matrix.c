/*
Summation of two (nxn) matrix
suppose;

1st matrix:
1 2
3 4

2nd matrix:
5 6
7 8

3rd matrix:
6 8
10 12
[N.B: 3rd matrix should be summation of 1st and 2nd matrix.]
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j;
    printf("\n");
    printf("Enter the number of Row,Column number: ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("\n");
    printf("Enter the 1st matrix below:\n");
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the 2nd matrix below:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The summation of 1st and 2nd matrix below:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]+b[i][j]);
            
        }printf("\n");
    }
    return 0;
}