#include<stdio.h>
#include<conio.h>
int main(){
    FILE *f1,*f2;
    f1=fopen("INPUT.txt","r");
    f2=fopen("copy.txt","w");
    char ch=getc(f1);
    putc(ch,f2);
    fclose(f1);
    fclose(f2);
    return 0;
}