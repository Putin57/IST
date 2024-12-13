// 6. Write a program to implement Tower of Hanoi problem by using recursive function

/*
-----------------------------------------
|Algorithm:                             |
|Tower(N, Beg, Aux, End)                |
|step-1: If N=1, then:                  |
|            (a)write: Beg --> End      |
|            (b)return                  |
|step-2: call Tower(N-1, Beg, End,Aux)  |
|step-3: write Tower(N-1, Aux, Beg, End)|
|step-4: call Tower(N-1, Aux, Beg, End) |
|step-5: Return                         |
-----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;
 

void tower(int n, string begin, string aux, string end){
    if(n == 1){
        cout << begin <<" --> " << end << "\n";
        return;
    }
    tower(n-1, begin, end, aux);
    cout << begin << " --> " << end << "\n";
    tower(n-1, aux, begin, end);
    return;
 
}
int main(){
    cout << "\nEnter the number : ";
    int n; cin >> n;
    string a = "A", b = "B", c= "C";
    tower(n, a, b, c);
    return 0;
}



/*
--------------------------
time complexity: O(2^n)
space complexity: O(n)
--------------------------
*/
