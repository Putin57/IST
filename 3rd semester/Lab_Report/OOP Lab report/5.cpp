/*
5. Write a program that finds the volume of different shapes (like rectangle.cylinder,cube)
using function overloading.
*/
#include <bits/stdc++.h>
using namespace std;

class Volume {
public:
  int length, width, height, radius;
  int shape(int length) { 
    return pow(length, 3);
  }
  int shape(int length, int width, int height) {
    return length * width * height;
  }
  float shape(int radius, int height) {
    return M_PI * radius * radius * height;
  }
};

int main() {
  Volume vol;
  cout << "\nEnter the Length: ";
  cin >> vol.length;
  cout << "Enter the Width: ";
  cin >> vol.width;
  cout << "Enter the height: ";
  cin >> vol.height;
  cout << "Enter the radious: ";
  cin >> vol.radius;
  cout << "\nThe Volume of Ractangle: " << vol.shape(vol.length, vol.width, vol.height) << '\n';
  cout << "The Volume of Cube: " << vol.shape(vol.length) << '\n';
  cout << "The Volume of Cylinder: " << vol.shape(vol.radius, vol.height) << '\n' << '\n';
  return 0;
}