#include<stdio.h>
#include<string.h>
void main(){
    char str1[1000],str2[1000];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    strncat(str1,str2,5);
    printf("\nConcatenated string: %s\n",str1);
}
