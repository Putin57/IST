/*
7. Write a program to find the largest and smallest number between two numbers of different classes.
*/

#include <bits/stdc++.h>
using namespace std;

class Large_Finder{
    public:
    int large(int x,int y){
        return max(x, y);
    }
};

class Small_Finder{
    public:
    int small(int a, int b){
        return min(a, b);
    }
};

int main(){
    cout << "\nEnter two number : ";
    int p, q; cin >> p >> q;
    Large_Finder lf;
    Small_Finder sf;
    cout << "The Small number is: " << sf.small(p, q) << '\n';
    cout << "The Large number is: " << lf.large(p, q) << '\n' << '\n';
    return 0;
}
