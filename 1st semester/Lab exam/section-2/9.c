#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    printf("Enter the string: ");
    gets(s);
    int n=strlen(s),vowel=0,cons=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            vowel++;
        }
        else{cons++;}
    }
    printf("Total number of vowel: %d\n",vowel);
    printf("Total number of consonant: %d\n",cons);
return 0;
}
