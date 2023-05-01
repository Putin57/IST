#include<stdio.h>
int main(){
    char s['\0'];  // if you don't know the size or length of string you should use null.. the null is '\0' .
    gets(s);  // gets() is special input function for string only
    puts(s); // puts() is special output function for string only
    puts("The End");
return 0;
}
