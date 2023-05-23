#include <stdio.h>
void bubbleSort(int arr[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j+1]<arr[j]){
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
}
int main(){
    int a[10],i=0,n;    
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);    
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    bubbleSort(a,n);    
    printf("\nAscending Order: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }   
    printf("\nDescending Order: ");
    for (i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }    
    printf("\n");    
    return 0;
}
