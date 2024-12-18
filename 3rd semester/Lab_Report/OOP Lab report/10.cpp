/*
10. Write a program to read a set of lines from the keyboard and to store it in a specific file. 

_________________________________________________
|N:B:                                            |
|first create "output.txt" file in folder        |
|where this cpp file also included..             |
|then run the code,,then write something         |
|in CMD... if you just stop the running process, |
|click "CTRL+Z". after you stopped the process,  |
|then check the "output.txt"..                   |
|________________________________________________|

*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream("output.txt")<<cin.rdbuf();
    return 0;
}
