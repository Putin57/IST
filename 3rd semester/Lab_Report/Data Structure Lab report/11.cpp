//11. Write a program to implement first pattern matching algorithm.
/*
----------------------------------------------------------
|Algorithm:                                              |   
|step-1: set K:=1 and Max := S-R+1                       |
|step-2: Repeat steps 3 to 5 while K<=Max:               |   
|step-3:     Repeat for L=1 to R:                        |
|                if p[L]!=T[K+L-1], then go to step 5    |
|step-4:     set Index=K, and exit                       |
|step-5:     set K:=K+1                                  |
|step-6: set index=0                                     |
|step-7: Exit                                            |
----------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string p, t;
    cout << "\nEnter the text: ";
    getline(cin, t);
    cout << "Enter the pattern: ";
    getline(cin, p);
    int text = t.size(), pattern = p.size(), index = -1, k = 0;
    while(k <= text - pattern) {
        bool flag = true;
        for (int l = 0; l < pattern; l++) {
            if (p[l] != t[k + l]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            index = k;
            break;
        }
        k++;
    }
    if (index != -1) {
        cout << "\nPattern is flag on the index: " << index + 1 << '\n';
    } else {
        cout << "\nPattern not found" << '\n';
    }

    return 0;
}



/*
---------------------------------
time complexity: O(n x m)
space complexity: O(1)
---------------------------------
*/
