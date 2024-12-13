//4. Write a program to determine n fibonacchi numbers using recursion.
/*
------------------------------------
|Algorithm:                        |
|step-1: If N==0 or N==1, then     | 
|            set Fib:=N and return |
|step-2: call Fibonacci(FibA,N-2)  |
|step-3: call Fibonacci (FibB,N-1) |
|step-4: set Fib:=FibA+FibB        | 
|strp-5: return                    | 
------------------------------------
*/

#include <bits/stdc++.h>
using namespace std; 

int fibonacci(int n){
    if((n==0) or (n==1)) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n; 
    cout << "\nEnter the positive number: ";
    cin >> n;
    cout << "The Fibonacci series upto Nth : ";
    for(int i = 0; i < n + 1; i++){
        cout << fibonacci(i) << ' ';
    }
    cout << '\n' << '\n';
    return 0;
}


/*
--------------------------
time complexity: O(n.2^n)
space complexity: O(n)
--------------------------
*/
