#include<stdio.h>
int main(){
    printf("\nEnter the size of array: ");
    int n;
    scanf("%d",&n);
    int i,arr[n];
    printf("\nEnter the array element: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m,sum=0,index=0;
    printf("\nEnter the searching element: ");
    scanf("%d",&m);
    for (i=0;i<n;i++){
        if(m==arr[i]){
            sum=i+1;
            break;
        }
    }
    if(sum>0){
        printf("\nYes, your searching element has in array and the index no: %d",sum);
    }
    else{
        printf("\nNo, your searching element hasn't in array.");
    }
    return 0;
}
