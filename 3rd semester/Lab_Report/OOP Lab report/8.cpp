/*
8. Write a program to find the squre and cube of a number 
read from keyboard.
*/

#include <bits/stdc++.h>
using namespace std; 

class Squre{
    public:
        int sq;
        void input(){cin >> sq;}
        int squre(int sq){return sq * sq;}
};
class Cube:public Squre{
    public:
    void squ(){cout << "Squre: " << squre(sq)<<"\n";}
    void cube(){cout << "Cube: "<< squre(sq)*sq << "\n";}
};
int main(){
    Cube c;
    cout <<"\nEnter the number : "; 
    c.input();
    c.squ();
    c.cube();
    return 0;
}
