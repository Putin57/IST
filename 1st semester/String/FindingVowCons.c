#include<stdio.h>
#include<string.h>
void main(){
    char str[30];
    int vow=0,cons=0,i=0;
    printf("Enter the string: ");
    scanf("%s",str);
    while(str[i]!='\0'){
        if (str[i]=='a' || str[i]=='A'|| str[i]=='e'|| str[i]=='E' || str[i]=='I' || str[i]=='i' ||str[i]=='O' || str[i]=='o' ||str[i]=='U'|| str[i]=='u' ){
            vow++;
        }
        else{cons++;}
        i++;
    }
    printf("\nNumber of Vowels = %d",vow);
    printf("\nNumber of Consonants = %d",cons);
}
