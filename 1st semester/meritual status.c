#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char driver[10];
    char gender[10];
    int age;
    printf("married or unmarried ??(use small letter): ");
    gets(driver);
    if(driver[0]=='m' && driver[1]=='a' && driver[2]=='r' && driver[3]=='r' && driver[4]=='i'&& driver[5]=='e' && driver[6]=='d'){
        printf("insured");
        exit(0);
    }
    else{
        printf("Enter Gender(small letter only): ");
        gets(gender);
        if(gender[0]=='m' && gender[1]=='a' && gender[2]=='l' && gender[3]=='e'){
            printf("Enter age: ");
            scanf("%d",&age);
            if(age>=25){printf("insured");}
            else{printf("Uninsured");}
        }
        else if(gender[0]=='f' && gender[1]=='e' && gender[2]=='m' && gender[3]=='a' && gender[4]=='l' && gender[5]=='e'){
            printf("Enter age: ");
            scanf("%d",&age);
            if(age>=25){printf("insured");}
            else{printf("Uninsured");}
        }

    }
    return 0;
}