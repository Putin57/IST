#include<stdio.h>
#include<string.h>
void main(){
    char str1[1000];
    char str2[1000];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    int total=strcmp(str1,str2);

    if(total == 0){puts("\nThe string are equal.\n");}
    else if (total<0){puts("\n1st string is less than 2nd string.\n");}
    else{puts("\n2nd string is less than 1st string");}
}
