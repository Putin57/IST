#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;
    printf("Enter the 1st matrix row: ");
    scanf("%d",&r1);
    printf("Enter the 1st matrix column: ");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("\n");
    printf("Enter the 1st matrix below:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

printf("\n");
printf("\nEnter the 2nd matrix row: ");
scanf("%d",&r2);
printf("Enter the 2nd matrix column: ");
scanf("%d",&c2);
int b[r2][c2];
printf("\n");
printf("Enter the 2nd matrix below:\n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("\n");

int c[r1][c2];
if(c1!=r2){
    printf("sorry..multiple not possible..");
}
else{
    printf("Multiplicaition of two matrix below:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++){c[i][j]=c[i][j]+a[i][k]*b[k][j];}
        }
    }
    for(i=0;i<r1;i++){
    printf("\n");
    for(j=0;j<c2;j++){
        printf("%d ",c[i][j]);
    }
    }
}

return 0;
}