#include<stdio.h>
#define MAX 30
void main(){
    int size,arr[MAX];
    int *ptr;
    ptr=&arr[0];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter %d integer elements: ",size);
    for(int i=0;i<size;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr[size-1];
    printf("Elements of array in reverse order are: ");
    for(int i=size-1;i>=0;i--){
        printf("%d ",*ptr);
        ptr--;
    }
    printf("\n");
}
