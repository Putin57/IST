/*
Question:Enter Five Number and count how many positive,negative,zero value
*/

#include<stdio.h>
int main(){
int a,b,c,d,e,pos=0,neg=0,zero=0;
printf("Enter 1st Number: ");
scanf("%d",&a);
printf("Enter 2nd Number: ");
scanf("%d",&b);
printf("Enter 3rd Number: ");
scanf("%d",&c);
printf("Enter 4th Number: ");
scanf("%d",&d);
printf("Enter 5th Number: ");
scanf("%d",&e);
if (a>0)
pos++;
else if (a<0)
neg++;
else
zero++;
if (b>0)
pos++;
else if (b<0)
neg++;
else
zero++;
if (c>0)
pos++;
else if (c<0)
neg++;
else
zero++;
if (d>0)
pos++;
else if (d<0)
neg++;
else
zero++;
if (e>0)
pos++;
else if (e<0)
neg++;
else
zero++;
printf("Total positive value: %d\n",pos);
printf("Total Negative Value: %d\n",neg);
printf("Total zero Value: %d\n",zero);
return 0;
}