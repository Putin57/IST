#include "bits/stdc++.h"
using namespace std;
 
class prime{
      public:
            long long int x;
            bool dummy(long long int x){
                  int sq=sqrt(x);
                  if(x==1 or x==0){
                        return false;
                  }
                 else if(x==2){
                        return true;
                  }
                  else{
                        for(int i = 2; i <= sq+1; i++){
                              if(x%i==0){
                                    return false;
                              }
                        }
                  }
                  return true;
            }
 
};
 
 
int main(){
      prime ob;
      cin >> ob.x;
      if(ob.dummy(ob.x)){
            cout << "prime\n";
      }
      else{
            cout << "not Prime\n";
      }
      return 0;
}
 
