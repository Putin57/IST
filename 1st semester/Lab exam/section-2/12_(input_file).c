#include<stdio.h>
int main(){
    FILE *file;
    char text[30];
    file=fopen("INPUT.txt","w");
    gets(text);
    fputs(text,file);
    fclose(file);
    file=fopen("INPUT.txt","r");
    while(fgets(text,sizeof(text),file)!=NULL){
        printf("%s",text);
    }
    fclose(file);
    return 0;
}
