#include<stdio.h>
int main(){
    int i,j,k,n;
    puts("########## The multiplication of n X n matrix ##########");
    printf("\nEnter the size of square matrix: ");
    scanf("%d",&n);
    printf("\n");
    int a[n][n],b[n][n],c[n][n];
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
    printf("\nMultiplication of two matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){c[i][j]=c[i][j]+a[i][k]*b[k][j];}
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){printf(" %d ",c[i][j]);}
    }
return 0;
}
