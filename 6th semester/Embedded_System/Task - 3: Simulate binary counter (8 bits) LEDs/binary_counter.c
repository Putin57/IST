#include <reg51.h>

sbit LED1 = P1^0;
sbit LED2 = P1^1;
sbit LED3 = P1^2;
sbit LED4 = P1^3;
sbit LED5 = P1^4;
sbit LED6 = P1^5;
sbit LED7 = P1^6;
sbit LED8 = P1^7;

void delay(){
    int i, j;
    for(i = 0; i < 200; i++){
        for(j = 0; j < 100; j++){
	}
   }
}
void main(){
    int i;
    while(1){
        for(i = 0; i < 256; i++){
            LED1 = i & 1;
            LED2 = (i >> 1) & 1;
            LED3 = (i >> 2) & 1;
            LED4 = (i >> 3) & 1;
            LED5 = (i >> 4) & 1;
            LED6 = (i >> 5) & 1;
            LED7 = (i >> 6) & 1;
            LED8 = (i>> 7) & 1;
            delay();
        }
    }
}
