//5. Write program to calculate factorial of a number using recursion
/*
-----------------------------------------
|Algorithm:                             |
|step-1: If N=0, set fact:=1 and return |
|step-2: call factorial(fact, N-1)      | 
|step-3: set fact:=N*fact               | 
|step-4: return                         | 
-----------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Enter the positive number: ";
    cin >> n;
    cout << "The Factorial of " << n << " is : ";
    cout << factorial(n) << '\n';
    return 0;
}