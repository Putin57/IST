#include <reg51.H>

sbit LED = P1 ^ 0;

void Delay(){
  int i, j;
  for(i = 0; i < 10; i++){
    for(j = 0; j < 10000; j++){
    }
  }
}
 
void main(){
   while(1){
      LED = 1;
      Delay();
      LED = 0;
      Delay();
   }
}
