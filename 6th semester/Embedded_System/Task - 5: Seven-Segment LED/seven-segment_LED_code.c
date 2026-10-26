#include<reg51.H>

void delay(){
   int i, j;
   for(i=0; i<10; i++){
      for(j=0;j<10000;j++) {
      }
   }
}

void main(){
   char seg[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
   int i, j;
   P2=0x00;
   P3=0x00;
   while(1){
      for(i=0; i<10; i++){
	 P2=seg[i];
	 for(j=0;j<10;j++){
	    P3=seg[j];
	    delay();
	 }
      }
   }
}
