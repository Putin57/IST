#include "bits/stdc++.h"
using namespace std;
const double pi = 3.14156;
class Area{
    public:
        float redius;
 
        float length;
        float height;
        float volume(){
            return (0.334)*pi*redius*redius*height;
        }
        float b_area(){
            return pi*redius*redius;
        } 
        float c_area(){
            return pi*redius*length;
        }
        float t_area(){
            return c_area()+b_area();
        }
};
 
int main(){
    Area obj;
 
    //cout << "radius : ";
    cin >> obj.redius;
    //cout << '\n';
    //cout << "height : ";
    cin >> obj.height;
    //cout << '\n';
     obj.length = sqrt(obj.redius*obj.redius+obj.height*obj.height);
 
    cout <<"The volume of cone: " << obj.volume() << '\n';
    cout << "The curved area of cone: " << obj.c_area() << '\n';
    cout << "The base area of cone: " << obj.b_area() << '\n';
    cout << "The total area of cone: "<<obj.t_area() << '\n';
 
    return 0;
}
