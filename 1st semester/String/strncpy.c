#include<stdio.h>
#include<string.h>
main(){
    char str1[1000];
    printf("Enter string: ");
    gets(str1);
    char str2[1000];
    strncpy(str2,str1,5);
    printf("\nCopied string: %s\n",str2);
}
