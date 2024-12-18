/*
2. Write a program to swap two numbers declared in two 
different classes using friend function.
*/
#include <bits/stdc++.h>
using namespace std;
class ClassB;
class ClassA{
    int numA;
    public:
        ClassA(int num):numA(num){}
        friend void swap(ClassA &a,ClassB &b);
        void display(){cout<<"ClassA numA: "<<numA<<"\n";}
};
class ClassB{
    int numB;
    public:
        ClassB(int num):numB(num){}
        friend void swap(ClassA &a, ClassB &b);
        void display(){cout<<"ClassB numB: "<<numB<<"\n";}
};
void swap(ClassA &a,ClassB &b){swap(a.numA,b.numB);}

int main() {
    int n, m;
    cout << "Enter the 1st number: ";cin >> n; 
    cout << "Enter the 2nd number: ";cin >> m;  
    ClassA a(n); ClassB b(m); 
    cout << "Before swap:" << "\n";
    a.display(); b.display(); 
    swap(a, b);   
    cout <<"After swap:" << "\n";
    a.display(); b.display();  
    return 0;
}
