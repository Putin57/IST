/*
3.Write a program with class to find whether a given number is prime or not
*/
#include <bits/stdc++.h>
using namespace std;

class Prime_Checker{
    public:
        bool prime(int n){
            if(n == 1) return false;
            else{
                for(int i = 2; i <= sqrt(n) + 1; i++){
                    if(n % i == 0) return false;
                }
                return true;
            }
        }
};

int main(){
    Prime_Checker pc;
    cout << "\nEnter the number: ";
    int n; cin >> n;
    if(pc.prime(n)) cout << "The number is prime.\n";
    else cout << "The number is not prime\n";
    cout << '\n';
    return 0;
}