#include <bits/stdc++.h>
using namespace std; 

int binary_search(vector<int>&v, int &search, int left, int right){
  if(left <= right){
    int mid = (left + right)/2;
    if(v[mid] == search){
      return mid;
    }
    else if(v[mid]<search){
      return binary_search(v, search, mid + 1, right);
    }
    else{
      return binary_search(v, search, left, mid - 1);
    }
  }
  else return -1;
}

int main(){
  int n, search;
  cout <<"Enter the size of array: ";
  cin >> n;
  cout << "Enter the element of array: ";
  vector<int>v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << "Enter the search element: ";
  cin >> search;
  int num = binary_search(v, search, 0, n-1);
  if(num != -1){
    cout << "Element found in index: " << num + 1 << '\n';
  }
  else{
    cout << "The element is not found\n";
  }
  return 0;
}
