// Binary Search (without using STL)

#include <bits/stdc++.h>
using namespace std;
int main(){
  cout << "\n\n.....Binary Search.....\n\n";
  cout << "Enter the size of array : ";
  int n;
  cin >> n;
  cout << "Enter the elements of array : ";
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  sort(arr, arr + n);
  cout << "After the sorting the array is : ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << ' ';
  }
  cout << '\n';

  cout << "Enter the search element : ";
  int search;
  cin >> search;
  int left = 0, right = n - 1;
  while(left <= right){
    int mid = (left + right)/2;
    if(arr[mid]==search){
      cout << "Search value found in index : " << mid + 1 << '\n';
      return 0;
    }
    else if(arr[mid] < search){
      left = mid + 1;
    }
    else{
      right = mid - 1;
    }
  }
  cout << "Not found\n";
  return 0;

}
