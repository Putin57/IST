#include <reg51.h>

sbit red = P1^0;
sbit yellow = P1^1;
sbit green = P1^2;
void delay(){
   int i, j;
   for(i = 0; i < 1000; i++)
      for(j = 0; j < 120; j++);
 }
 void main(){
   while(1){
      red  = 1;
      yellow = 0;
      green = 0;
      delay();
      
       red  = 0;
      yellow = 1;
      green = 0;
      delay();
      
      red  = 0;
      yellow = 0;
      green = 1;
      delay();
   }
 }
