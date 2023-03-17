//Bubble sorting (decending order)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#define TEN 10
int main(){
    //initialize variable for sorting
    int arr[TEN],i,p,c,z;
    printf("Bubble sort for 10 numbers in descending order...\n\n");
    //STEP-1: using loop (for loop) take input for array from user
    printf("Enter 10 number: \n");
    for (i=0;i<TEN;i++){
        scanf("%d",&arr[i]);
    }
    //STEP-2: print array before sorting
    printf("\nBefore sorting: \n");
    for (i=0;i<TEN;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("\nAfter sorting: \n");
    //STEP-3: sorting part (very important part)
    for(p=1;p<TEN;p++){
        for (c=0;c<TEN-p;c++){
            if(arr[c]<arr[c+1]){  //if 2nd index is greater then 1st index 
            z=arr[c]; //then 1st element will go z variable
            arr[c]=arr[c+1]; //ager element ta porer element hobe
            arr[c+1]=z; //porer element ta z variable er equal hobe
            }
        }
    }
    //STEP-4: finally print the sorting array
    for(c=0;c<TEN;c++){
        printf("%d ",arr[c]);
    }
    return 0;
}