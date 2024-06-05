#include <bits/stdc++.h>
using namespace std;
 
class A{
public:
    int a;
    int b;
    // plus only
    A operator +(A obj2){
        A obj3;
        obj3.a = a + obj2.a;
        obj3.b = b + obj2.b;
        return obj3;
    }
    // multiplication
    A operator *(A obj2){
      A obj4;
      obj4.a = a * obj2.a;
      obj4.b = b * obj2.b;
      return obj4;
    }
};
int main(){
 
    A obj1, obj2, obj3, obj4;
    int x1, x2, y1, y2;
    cout << "a1 = ";
    cin >> x1;
    cout << "b1 = ";
    cin >> y1;
    cout << "a2 = ";
    cin >> x2;
    cout << "b2 = ";
    cin >> y2;
    obj1.a=x1;
    obj2.a=x2;
    obj1.b=y1;
    obj2.b=y2;
 
//    obj1.a=5;
//    obj1.b=6;
//    obj2.a=5;
//    obj2.b=6;
//    obj3.a=obj1.a+obj2.a;
    obj3 = obj1 + obj2;
    obj4 = obj1 * obj2;
    cout << "\nplus\n";
    cout << "A = " << obj3.a << ' ' <<"and B = " << obj3.b << endl;
    cout << "\nMultiplication\n";
    cout << "A = "<< obj4.a << ' ' << "and B = "<<obj4.b << endl;
    return 0;
}
 
