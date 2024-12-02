/*
6.Write a class to represent time that includes the member function to perform the followin :
    - Take input for time in hours and minutes
    - Add two times.
    - Display the time in form hours:minutes
*/
#include <bits/stdc++.h>
using namespace std; 

class Time{
  public:
    int hr1, min1, hr2, min2, total_hr, total_min;
    void input(){
      cout << "\nEnter the first hour: ";
      cin >> hr1;
      cout << "Enter the first minute: ";
      cin >> min1;
      cout << "Enter the second hour: ";
      cin >> hr2;
      cout << "Enter the second minute: ";
      cin >> min2;
    }
    void add_time(){
      total_min = (min1 + min2) % 60;
      total_hr = hr1 + hr2 + ((min1 + min2)/60);
    }
    void output(){
      cout << "\nThe total time is (hh:mm): " << total_hr << ":";
      if(total_min <= 9) cout << "0" <<total_min;
      else cout << total_min;
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