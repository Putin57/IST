/*
Question: 
take a input number and find out GPA
*/
#include<stdio.h>
int main(){
    int a,num;
    printf("Enter a integer number : ");
    scanf("%d",&a);
    num = a/10;
    if (a>=0 && a<=100){
        switch (num)
        {
        case 10:
        case 9:
        case 8:
            printf("A+");
            break;
        case 7:
        printf("A");
        break;
        case 6:
        printf("A-");
        break;
        case 5:
        printf("B+");
        break;

        default:
        printf("F");
            break;
        }
    }else{
        printf("Enter valid number");
    }
return 0;
}