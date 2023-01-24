/*
####goto statement#####
Question: Physics, Chemistry, English, Calculus marks and average.
*/

#include<stdio.h>
int main(){
    int s1,s2,s3,s4,sum;
    float avg;
cal:
printf("Enter Calculus number: ");
scanf("%d",&s1);
if (s1<=0||s1>=20)
goto cal;
phy:
printf("Enter Physics number: ");
scanf("%d",&s2);
if (s2<=0||s2>=20)
goto phy;
chem:
printf("Enter Chemistry number: ");
scanf("%d",&s3);
if (s3<=0||s3>=20)
goto chem;
eng:
printf("Enter English number: ");
scanf("%d",&s4);
if (s4<=0||s4>=20)
goto eng;
sum=s1+s2+s3+s4;
avg=sum/4.0;
printf("Average Marks : %.3f\n",avg);
if (avg<=20 && avg>=15)
printf("GPA: A+\n");
else if (avg<=14 && avg>=10)
printf("GPA: A\n");
else
printf("GPA: Fail\n");
return 0;
}