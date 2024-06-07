#include <bits/stdc++.h>
using namespace std;
int main(){
  cout << "\n\n.....Quadric Equation.....\n\n";
  float a, b, c;
  cout << "A = " ;
  cin >> a;
  cout << "B = ";
  cin >> b;
  cout << "C = ";
  cin >> c;
  if(a==0){
      cout << "Infinite solution.";
      exit(true);
  }
  else{
      float d = (b*b) - (4*a*c);
      if(d > 0){
          cout << "\nTwo solution\n";
          float x1 = (-b+ sqrt(d))/(2*a);
          float x2 = (-b-sqrt(d))/(2*a);
          cout << "X1 = " << x1 << '\n';
          cout << "X2 = " << x2 << '\n';
      }
      else if(d==0){
          cout << "\nOne Solution\n";
          cout << "X = " << -b/(2*a);
      }
      else{
          cout << "No Real Solution.";
      }
  }
  return 0;
}
 
