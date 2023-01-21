/*
question :--- 
Input: a       Input: M
Output: A      Output: m

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
return 0;
}