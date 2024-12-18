/*
3. write a program to find the gretest of three given numbers in three different classes
using friend function. 
*/
#include <bits/stdc++.h>
using namespace std;
class ClassB;class ClassC;
class ClassA{
    int numA;
    public:
        ClassA(int num):numA(num){}
        friend int greatest(ClassA&,ClassB&,ClassC&);
        void display(){cout<<"ClassA: "<<numA<<'\n';}
};
class ClassB{
    int numB;
    public:
        ClassB(int num):numB(num){}
        friend int greatest(ClassA&,ClassB&,ClassC&);
        void display(){cout<<"ClassB: "<<numB<<'\n';}
};
class ClassC{
    int numC;
    public:
        ClassC(int num):numC(num){}
        friend int greatest(ClassA&,ClassB&,ClassC&);
        void display(){cout<<"ClassC: "<<numC<<"\n";}
};
int greatest(ClassA &a,ClassB &b,ClassC &c) {
    return max(a.numA,max(b.numB,c.numC));
}
int main() {
    int x,y,z;
    cout <<"Enter 3 number: ";cin>>x>>y>>z;
    ClassA a(x);ClassB b(y);ClassC c(z);
    a.display();b.display();c.display();
    cout << "Greatest: "<<greatest(a,b,c)<<"\n";
    return 0;
}
