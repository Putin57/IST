
/*
write a program which would print the alphabet set "a" to "z" and "A" to "Z" in decimal and character form .
*/
void main(){
    char c;
    printf("\n\n");
    for (c=65; c<=122; c=c+1){
        if(c>90 && c<97)
            continue;
        printf("|%4d - %c ",c,c);
    }
    printf("|\n");
}
