
#include<stdio.h>
#include<string.h>
void main(){
    char str1[1000];
    char str2[1000];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string: %s ", str1);
}
