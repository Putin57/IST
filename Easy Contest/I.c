#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a%500;
    if (c<=b){
        printf("Yes");
    }else{
        printf("No");
    }
return 0;
}