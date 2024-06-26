//Single Inheritance
#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string s1 = "goru", s2 = "sagol", s3 = "patha";
};
class Person{
    public:
    string x1 ="Obaidul kader", x2="Salman F Rahman",x3="Papon";
};
class Employ{
    public:
    string y1="Batpar", y2="Chor",y3="Bekup";
};
class Vehicle{
    public:
    string z1="Rickshaw", z2="Pa", z3="Hamaguri";
};
class Single:public Animal{
    public:
    void print(){
        cout << s1 << ' ' <<s2 << ' ' <<s3 <<'\n';
    }
};
int main(){
    Single s;
    s.print();
    return 0;
}
