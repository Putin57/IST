#include<stdio.h>
#include<string.h>
int main(){
char str[30];
printf("Enter The String: ");
gets(str);
int n = strlen(str);
printf("\nThe String's Length is: %d\n",n);
char aux[n],word[60];
printf("\nEnter a string to Compare with the 1st one: ");
gets(word);
printf("\nThe compared value is: %d\n",strcmp(str,word));
strcpy(aux,str);
printf("\nThe copied string is: %s\n",aux);
strcat(str," ");
strcat(str,word);
printf("\nAfter Adding another srting the new string is: %s\n",str);
return 0;
}
