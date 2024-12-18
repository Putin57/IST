/*
4.Write a program to for calculating of three given numbersin three different classes using concept of 
function overloading.
*/

#include <bits/stdc++.h>
using namespace std;
 
class Area {
    public:
        void area(float a, float b, float c){cout << "The area of Triangle: " << 0.5 * a * b << '\n';}
        void area(float b, float c){cout << "The area of Rectangle is: " << b * c << '\n';}
        void area(float r){cout << "The area of Circle is: " << 3.1416 * r * r << '\n';}
};
int main() {
    Area a;
    float height, length, width, radius;
    cout << "\nEnter the height: "; cin >> height;
    cout << "Enter the length: "; cin >> length;
    cout << "Enter the width: "; cin >> width;
    cout << "Enter the radius: "; cin >> radius;
    a.area(height, length, width);
    a.area(length, width);
    a.area(radius);
    return 0;
}
