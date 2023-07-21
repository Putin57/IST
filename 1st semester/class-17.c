/*
question :--- 
Input: a       Output: A
Input: M       Output: m

*/


#include<stdio.h>
#include<ctype.h>
char main(){
char text;
text = getchar();
if (isupper(text)>0){
    putchar(tolower(text));
}else{
    putchar(toupper(text));
}
printf("\n");
return 0;
}
