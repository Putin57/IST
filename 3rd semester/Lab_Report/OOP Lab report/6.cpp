/*
6. Create a class Time with member hours, minutes and seconds. Take input. add two-time 
objects passing objects to function and display result;
*/
#include <bits/stdc++.h>
using namespace std; 

class Time{
  public:
    int hr1, min1, sec1, hr2, min2, sec2, total_hr, total_min, total_second;
    void input(){
      cout << "\nEnter the first hour: "; cin >> hr1;
      cout << "Enter the first minute: "; cin >> min1;
      cout << "Enter the first second: "; cin >> sec1;
      cout << "Enter the second hour: "; cin >> hr2;
      cout << "Enter the second minute: "; cin >> min2;
      cout << "Enter the second second: "; cin >> sec2;
    }
    void add_time(){
      total_second = (sec1 + sec2) % 60;
      total_min = (min1 + min2+(sec1+sec2)/60) % 60;
      total_hr = hr1 + hr2 + ((min1 + min2+(sec1+sec2)/60)/60);
    }
    void output(){
      cout << "\nThe total time is (hh:mm:ss): " << total_hr << ":";
      if(total_min <= 9) cout << "0" <<total_min;
      else cout << total_min;
      cout << ":";
      if(total_second<=9)cout << "0"<<total_second;
      else cout << total_second;
      cout << "\n\n";
    }
};

int main(){
  Time time;
  time.input();
  time.add_time();
  time.output();
  return 0;
}
