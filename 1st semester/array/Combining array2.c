#include<stdio.h>
int main(){
    int i, arr1[4]={10,20,30,40};
    char arr2[4]={'T','E','S','T'};
    for(i=0;i<4;i++){
        if(i<3){printf("%c %d ",arr2[i],arr1[i]);}
        else{printf("%c %d ",arr2[i],arr1[i]);}
    }
    return 0;
}