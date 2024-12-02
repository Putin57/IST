/*
1. Write a program to enter any number and find its factorial using constructor.
*/

#include <bits/stdc++.h>
using namespace std;

class Factorial{
  long long int num, ans;
  public:
    Factorial(int n){
      num = n;
      ans = 1;
      for(int i = 1; i <= num; i++) ans *= i;
    }
    void output(){
      cout << "The number of " << num << "! = " << ans << '\n'; 
    }
};

int main(){
  int num;
  cout << "\nEnter the number (positive only): ";
  cin >> num;
  Factorial fact(num);
  fact.output();
  cout << '\n'; 
  return 0;
}
