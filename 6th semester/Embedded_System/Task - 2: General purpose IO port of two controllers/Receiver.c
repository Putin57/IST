#include<reg51.H>

void Delay(){
   int i,j;
   for(i=0; i<10; i++){
      for(j=0; j<10000; j++){
      }
   }
}

void main(){
   while(1){
      P2=P1;
      Delay();
   }
 }
