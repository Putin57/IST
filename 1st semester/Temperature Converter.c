#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    float c,f,celcius,fahrenheit;
    int n;
    char x;
    printf("###__Temerature Converter__###\n");
    printf("1.Convert Celcius to Fahrenheit.\n");
    printf("2.Convert Fahrenheit to Celcius.\n");
    while(1){
    printf("\nEnter type a number (1/2): ");
    scanf("%d",&n);
    if (n==1||n==2){
        if (n==1){
            printf("\nEnter Celcious value: ");
            scanf("%f",&c);
            fahrenheit=((9*c)/5)+32;
            printf("Fahrenheit: %.2f",fahrenheit);
            printf("\nDo you want to Continue?(Y/N): ");
            scanf(" %c",&x);
            if (x=='y'||x=='Y'){
                continue;
            }
            else{printf("\nThank You..");
            break;
                }
            }
        else if(n==2){
            printf("\nEnter Fahrenheit value: ");
            scanf("%f",&f);
            celcius=(5*(f-32))/9;
            printf("Celcious: %.2f",celcius);
            printf("\nDo you want to Continue?(Y/N): ");
            scanf(" %c",&x);
            if (x=='y'||x=='Y'){
                continue;
            }
            else{printf("\nThank You..");
            break;
                }
        }
    }
    else{
        printf("\nEnter valid Number.");
        printf("\nDo you want to Continue?(Y/N): ");
            scanf(" %c",&x);
            if (x=='y'||x=='Y'){
                continue;
            }else{printf("Thank You..");
            break;
                 }
        }
    }
    return 0;
}
