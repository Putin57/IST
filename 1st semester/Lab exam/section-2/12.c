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


/*
After running the code here, typing something in the input and pressing ctrl+z will stop it and you can see the output in the "output.txt" file...
*/
