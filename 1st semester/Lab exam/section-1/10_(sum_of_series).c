/*
Question: write the summation of : 1/1! + 2/2! + 3/3! + 4/4! + 5/5! + 6/6! + 7/7!.....
*/


#include<stdio.h>
int main(){
    float n,count=0,i,j;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        float num=1;
        for(j=1;j<=i;j++){
            num*=j;
        } 
        count+=i/num;
    }
    printf("%.5f\n",count);
    return 0;
}
