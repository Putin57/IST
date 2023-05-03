#include<stdio.h>
#include<string.h>
int main(){
    char text1[1000],text2[1000];
    printf("Enter the text for reverse : ");
    gets(text1);
    printf("\nThe reverse string is : ");
    strcpy(text2,text1);
    strrev(text2);
    printf(text2);
    return 0;
}