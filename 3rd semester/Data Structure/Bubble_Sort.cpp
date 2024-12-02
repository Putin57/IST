#include <bits/stdc++.h>
using namespace std;
int main(){
  cout << "\n\n..........Bubble Sort..........\n\n";
  cout << "Enter the size of array : ";
  int n;
  cin >> n;
  cout << "Enter the elements of array : ";
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        int tmp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  cout << "After sorting array is : ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << ' ';
  }
  cout << '\n';

  return 0;
}
