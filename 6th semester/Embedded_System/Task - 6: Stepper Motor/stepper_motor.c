#include <reg51.h>

void delay(){
   int  i, j;
   for(i = 255; i != 0; i--){
      for(j = 255; j != 0; j--){
      }
    }
 }
 void main(){
      while(1){
	 P2 = 0x01;
	 delay();
	 P2 = 0x02;
	 delay();
	 P2 = 0x04;
	 delays();
	 P2 = 0x08;
	 delay();
	 }
}
 
