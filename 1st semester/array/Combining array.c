#include<stdio.h>
#include<math.h>
int main(){
    int arr1[4]={'T','E','S','T'};
    int arr2[4]={10,20,30,40};
    int arr3[8];
    int i,a=0,b=0;
    for (i=0;i<8;i++){
        if(i%2==1){
            arr3[i]=arr2[a];
            a++;}
        else{arr3[i]=arr1[b];
            b++;}
    }
    for (i=0;i<8;i++){
        if(i%2==1){
            printf("%d ",arr3[i]);}
        else{printf("%c ",arr3[i]);}
    }
    return 0;
}
