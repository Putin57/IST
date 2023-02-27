#include<iostream>
using namespace std;
int main(){
   int t,a,b,c;
   cin>>t;
   while(t--){
      cin>>a>>b>>c;
      if(a+b==c || b+c==a || c+a==b){cout<<"YES"<<endl;}
      else if(a==b && c%2==0){cout<<"YES"<<endl;}
      else if(a==c && b%2==0){cout<<"YES"<<endl;}
      else if (b==c && a%2==0){cout<<"YES"<<endl;}
      else if (a<c && b<c && c==a+b){cout<<"YES"<<endl;}
      else if(a<b && c<b && b==a+c){cout<<"YES"<<endl;}
      else if (a>c && a>b && a==b+c){cout<<"YES"<<endl;}
      else{cout<<"NO"<<endl;}
   }
   return 0;
}