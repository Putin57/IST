//10. write a program to sort an array using quick sort algorithm
/*
-----------------------------------------------------------------
|Algorithm:                                                     |
|step-1: Top:=NULL                                              |
|step-2: If N>1, then:Top:=Top+1, Lower[1]:=1, Upper[1]:=N      |
|step-3: Repeat steps 4 to 7 while Top != NULL                  |
|step-4:     set Beg:=Lower[Top], End:=Upper[Top], Top:=Top-1   |
|step-5:     call Quick(A,N,Beg,End, Loc)                       |
|step-6:     If Beg<Loc-1, then:                                |
|                Top:=Top+1, Lower[Top]:=Beg, Upper[Top]=Loc-1  |
|step-7:     If Loc+1 < End, then:                              |
|                Top:Top+1, Lower[Top]:=Loc+1, Upper[Top]:=End  |
|step-8: Exit                                                   |    
-----------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std; 

vector<int>quick_sort(const vector <int> &arr){
    if(arr.size() <= 1) return arr;
    int pivot = arr[0];
    vector<int>smaller, greater;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= pivot) smaller.push_back(arr[i]);
        else greater.push_back(arr[i]);
    }
    vector<int>smaller_sorted = quick_sort(smaller), greater_sorted = quick_sort(greater);
    smaller_sorted.push_back(pivot);
    smaller_sorted.insert(smaller_sorted.end(), greater_sorted.begin(), greater_sorted.end());
    return smaller_sorted;
}

int main(){
    cout << "\nEnter the size of array: ";
    int n; cin >> n;
    cout << "Enter the element of array: ";
    vector<int>arr(n),final_sort;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Quick Sort: ";
    final_sort = quick_sort(arr);
    for(int i: final_sort) cout << i << ' ';
    cout << '\n' << '\n';
    return 0;
}