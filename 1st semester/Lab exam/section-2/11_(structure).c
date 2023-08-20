#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student{
    int id;
    char name[50];
    int mark;
};

int main(){
    struct student s[5];
    int i;

    printf("\nThe records only for 5 student\n\n");

    for(i=0;i<5;i++){
    printf("\nRoll no : ");
    scanf("%d",&s[i].id);
    printf("Enter Name(nick name only) : ");
    scanf("%s",s[i].name);
    printf("Enter Marks : ");
    scanf("%d",&s[i].mark);
    }

    printf("\nData of 5 students");

    for(i=0;i<5;i++){
        printf("\nID no : %d\t Name : %s\t Marks : %d",s[i].id,s[i].name,s[i].mark);
    }

    printf("\n\n");
    exit(0);
    getch();
    return 0;
}
