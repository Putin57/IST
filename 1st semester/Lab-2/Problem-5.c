/* Question: 
input:
day, Month, Year
1  1  2023
output:
Date: 1-1-2023
*/

#include<stdio.h>
int main(){
    int day,month,year;
    printf("day,month,year\n");
    scanf("%d %d %d",&day,&month,&year);
    printf("Date : %d-%d-%d",day,month,year);
    return 0;
}