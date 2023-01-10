//If-Else and Else-if ladder
/*
Question: 
Input total marks (0-100) for a subject mathematics and display the result as grade:
(80-100):A+
(70-79):A
(60-69):A-
(50-59):B+
<50:F 
*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if (marks>=0 && marks<=100)
    {
        if (marks>=80 && marks<=100)
        {
            printf("A+");
        }
        else if (marks>=70 && marks<=79)
        {
            printf("A");
        }
        else if (marks>=60 && marks<=69)
        {
            printf("A-");
        }
        else if (marks>=50 && marks<=59)
        {
            printf("B+");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("Enter the valid marks");
    }
    
    return 0;
}