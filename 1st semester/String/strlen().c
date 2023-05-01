#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    printf("Enter the string: ");
    gets(str);
    int len=strlen(str);
    printf("\nLength of string: %d\n",len);
}
