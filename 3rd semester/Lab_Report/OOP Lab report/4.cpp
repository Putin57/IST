/*
4. Write a program to append the contents of a file into another.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream src("main.txt");
    ofstream dest("copy.txt");
    dest << src.rdbuf();
}
