/*
9. Write a program to append the contents of a file into another.
*/

/*
|______________________________________________________________________________________________________________|
|N:B:                                                                                                          |
|Make sure you create two txt file which one is "main.txt" and another one is "append.txt" and this cpp file   |
|in one folder.. Then write something those two txt file (as your wish)..Then run the code..                   |
|Now, check the "append.txt" file..                                                                            |
|______________________________________________________________________________________________________________|


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream src("main.txt");
    ofstream dest("append.txt",ios::app);
    dest << '\n' << src.rdbuf();
    return 0;
}
