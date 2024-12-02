/*
9. Given the following base class:
        class area_cl{
        public:
            double height;
            double width;
        };
Create two derived classes called rectangle and isosceles that
inherit area_cl. Have each class includes a function area()
 that returns the area of a rectangle isosceles triangle as appropriate.
 Use parameterized constructor to initial height and width.
 Write the complete program.
 */

#include <bits/stdc++.h>
using namespace std;
class Area_cl{
public:
    double height,width;
    Area_cl(double h,double w):height(h),width(w){}
};
class Rectangle: public Area_cl{
public:
    Rectangle(double h, double w):Area_cl(h,w){}
    double area(){return height*width;}
};
class isosceles:public Area_cl{
public:
    isosceles(double h,double w):Area_cl(h,w){}
    double area(){return (height*width)/2;}
};
int main() {
    double h, w;
    cout << "\nEnter the Height: ";
    cin >> h;
    cout << "Enter the width: ";
    cin >> w;
    Rectangle rect(h, w);
    cout << "Area of the rectangle: " << rect.area() << "\n";
    cout << "Enter the height for isosceles triangle: ";
    cin >> h;
    cout << "Enter the width for isosceles triangle: ";
    cin >> w;
    isosceles tri(h, w);
    cout << "Area of the isosceles triangle: " << tri.area() << "\n\n";
    return 0;
}
