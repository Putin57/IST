//Multiple Inheritance
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
 
class Multiple: public Person, public Employ, public Vehicle, public Animal{
    public:
    void print(){
        cout << x1 << " ekta " << s1 <<". ei " <<y1<<"er uchit " << z1 <<" diye basai jawa." <<'\n';
        cout << x2 << " ekta " << s2 <<". ei " <<y2<<"er uchit " << z2 <<" diye basai jawa." <<'\n';
        cout << x3 << " ekta " << s3 <<". ei " <<y3<<"er uchit " << z3 <<" diye basai jawa." <<'\n';
    }
};
int main(){
    Multiple m;
    m.print();
}
