#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe summation of array: ");
    int count=0;
    for(int i=0;i<n;i++){
        count+=arr[i];
    }
    printf("%d",count);
    return 0;
}
