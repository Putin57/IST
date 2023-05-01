#include<stdio.h>
#include<string.h>
void main(){
    char str1[1000];
    char str2[1000];
    printf("Enter string for copy: ");
    gets(str1);
    strcpy(str2, str1);
    printf("Copied string from str1: %s");
}
