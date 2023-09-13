#include<stdio.h>
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



/*
1st we will create "INPUT.txt" file.
But it must be placed where this C file is created.
Then open the file and give some input there.
Then save the file. Then write the code in the CodeBlocks and run it.
It will be seen that another file called "copy.txt" will be seen.
If you open that "copy.txt" file, you will see only the 1st letter of what we wrote in the "INPUT.txt" file.
There is nothing to panic. Only 1 character will appear in this task....

........Happpy Coding.......


created by  
___  ___      _     _     _ 
|  \/  |     | |   (_)   | |
| .  . | __ _| |__  _  __| |
| |\/| |/ _` | '_ \| |/ _` |
| |  | | (_| | | | | | (_| |
\_|  |_/\__,_|_| |_|_|\__,_|

*/
