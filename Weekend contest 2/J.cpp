#include<iostream>
using namespace std;
int main(){
   int x,num_bactaria=0;
   cin>>x;
   while(x>0){
      if(x%2==1){num_bactaria+=1;}
      x=x/2;
   }
   cout<<num_bactaria;
   return 0;
}