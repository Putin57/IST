/*
8. Create a class float that contains one float data number. Overload all the four
arithmatic operators for two objects.
*/

#include <bits/stdc++.h>
using namespace std;

class Number {
    float value;
public:
    Number(float v=0):value(v){}
    Number operator+(Number&other)const{return Number(value+other.value);}
    Number operator-(Number&other)const{return Number(value-other.value);}
    Number operator*(Number&other)const{return Number(value*other.value);}
    Number operator/(Number& other)const{return Number(value/other.value);}
    void display(){cout << value <<'\n'; }
};
int main(){
    float val1, val2;
    cout << "\nEnter the first number(without zero): ";
    cin >> val1;
    cout << "Enter the second number(without zero): ";
    cin >> val2;
    Number a(val1), b(val2);
    Number sum = a + b;
    Number diff = a - b;
    Number prod = a * b;
    Number quot = a / b;
    cout << "\nSummation: "; sum.display();
    cout << "Subtraction: "; diff.display();
    cout << "Multiplication: "; prod.display();
    cout << "Division: "; quot.display();
    return 0;
}
