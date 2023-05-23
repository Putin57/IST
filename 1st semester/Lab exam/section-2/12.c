#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("output.txt","w");
    ch=getchar();
    while(ch!=EOF){
        fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);
    return 0;
}