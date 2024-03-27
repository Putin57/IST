/*
Basic class of OOP 
*/

#include <bits/stdc++.h>
using namespace std;

class Triangle{
    public:
    double base, height, hypotenuse, area, perimeter;
    void triangle(){
        cout<<"\nThe Base of a triangle: "<<base<<"\n";
        cout<<"The Height of a triangle: "<<height<<"\n";
        hypotenuse = sqrt(base * base + height * height);
        cout<<"The Hypotenuse of a triangle: "<<hypotenuse<<"\n";
        area = 0.5 * base * height;
        cout << "The Area of triangle: "<<area<<"\n";
        perimeter=(base + height + hypotenuse);
        cout<<"The Perimeter of triangle: "<<perimeter<<"\n\n";
    }
};

class Employee{
    public:
    string name,address;
    int salary;
    void employee(){
        cout<<"\nThe name of Employee is: "<<name<<"\n";
        cout<<"Salary: "<<salary<<"$"<<"\n";
        cout<<"Address: "<<address<<"\n\n";
    }
};

int main(){
    Triangle t;
    t.height=10;
    t.base=20;
    t.triangle();
    Employee e;
    e.name="Mahid";
    e.address="Mosco, Russia";
    e.salary=100000000;
    e.employee();
    return 0;
}
