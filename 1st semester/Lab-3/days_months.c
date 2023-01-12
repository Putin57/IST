/*
Question-1: Calculate how many month & days for a given days.
input: 
Days: 83
output:
2 month 23 day
*/

#include<stdio.h>
int main(){
    int x,day,month;
    printf("Days: ");
    scanf("%d",&x);
    day = x%30;
    month = x/30;
    printf("%d month %d day",month,day);
    return 0;


}