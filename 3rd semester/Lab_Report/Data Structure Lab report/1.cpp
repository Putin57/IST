//1.Find the Smallest and Largest element of the Array
/*
---------------------------------------------------------
|Algorithm: 											                      |
|step-1: Set K:=1,LOC:=1,Max:=Data[1] and Min:= Data[1] |
|setp-2: Repeat steps 3 to 5 while k<=N: 				        |
|step-3: 	If Max < Data[K], then: 					            |
|				set LOC:=K and Max:=Data[K]				              |
|step-4: 	If Min>Data[k], then: 						            |
|				set LOC:=k and Min:=Data[K]				              |
|step-5: 	set K:=K+1									                  |
|step-6: Write: LOC, Max, Min							              |
|step-7: Exit.											                    |	
---------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, mx = INT_MIN, mn = INT_MAX;
	cout << "Enter the size of Array : ";
	cin >> n;
	int arr[n];
	cout << "\nEnter the element of Array : ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(mx < arr[i]){
			mx = arr[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(mn > arr[i]){
			mn = arr[i];
		}
	}
	cout << "\nThe Smallest element of the array is: " << mn << '\n';
	cout << "The Largest element of the array is: " << mx << '\n';
	cout << '\n';
	return 0;
}

