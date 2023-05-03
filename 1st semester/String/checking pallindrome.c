#include<stdio.h>
#include<string.h>
int main(){
    char text1[1000],text2[1000];
    printf("Enter the string for reverse: ");
    gets(text1);
    strcpy(text2,text1);
    strrev(text2);
    if(strcmp(text2,text1)==0){
        printf("\nThe string is pallindrome.\n");
        printf("\n");
    }
    else{printf("\nThe string isn't a pallindrome.\n");
        printf("\n");
        }
return 0;
}

