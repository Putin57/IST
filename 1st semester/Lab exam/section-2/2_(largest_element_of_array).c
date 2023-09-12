#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter the size array: ");
    int n;
    scanf("%d",&n);
    int arr[n],mx=0;
    printf("Enter the numbers for array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        mx=fmax(arr[i],mx);
    }
    printf("The max element is : %d\n",mx);
}
