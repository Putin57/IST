#include<stdio.h>
int main(void){
    int a[10],i=0,j=0,n,t;
    printf("\nEnter the no. elements: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<(n-1);j++){
        for(i=0;i<(n-1);i++){
            if(a[i+1]<a[i]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    printf("\nAscending Order: ");
    for(i=0;i<n;i++){printf("%d ",a[i]);}
printf("\n");
    printf("\nDescending Order: ");
    for(i=n;i>0;i--){printf("%d ",a[i-1]);}
    printf("\n");
}
