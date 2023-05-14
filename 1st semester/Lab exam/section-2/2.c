#include<stdio.h>
#define TEN 10
int main(){
    int arr[TEN],i,p,c,z;
    printf("Enter 10 number: \n");
    for (i=0;i<TEN;i++){
        scanf("%d",&arr[i]);
    }
    for(p=1;p<TEN;p++){
        for (c=0;c<TEN-p;c++){
            if(arr[c]<arr[c+1]){
            z=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=z;
            }
        }
    }
    printf("The largest element of an array: %d",arr[0]);
    return 0;
}