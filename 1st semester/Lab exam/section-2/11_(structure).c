#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student boys[3];
    for (int i = 0; i < 3; i++) {
        printf("%d:\n",i+1);
        printf("Name: ");
        scanf("%s",boys[i].name);
        printf("Roll: ");
        scanf("%d",&boys[i].roll);
        printf("Marks: ");
        scanf("%f",&boys[i].marks);
    }
    printf("\nBoys result:\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i <2; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (boys[j].marks <boys[j + 1].marks) {
                struct Student temp =boys[j];
                boys[j] =boys[j + 1];
                boys[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t\t%.2f\n", boys[i].name,boys[i].roll,boys[i].marks);
    }
    return 0;
}
