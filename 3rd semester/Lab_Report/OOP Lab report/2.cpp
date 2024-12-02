/*
2.Create a class called COMPLEX that has two private data
called real and imaginary. Include constructor function to input real and imaginary values, show() to display complex numbers.
Write a program to add two complex numbers.
*/

#include <bits/stdc++.h>
using namespace std; 

class Complex{
    int real, imaginary;
    public:
        Complex(int real = 0, int imaginary = 0): real(real), imaginary(imaginary){};
        void input(){
            cin >> real >> imaginary;
        }
        Complex operator+(Complex c2){
            Complex c3;
            c3.real = real + c2.real;
            c3.imaginary = imaginary + c2.imaginary;
            return c3;
        }
        void show(){
            cout << real << " + i"<<imaginary << '\n';
        }
};

int main(){
    Complex com, tom, c3;
    com.input();
    tom.input();
    c3 = com + tom;
    c3.show();
    return 0;
}