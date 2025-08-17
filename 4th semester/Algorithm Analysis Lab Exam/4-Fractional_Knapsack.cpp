#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cout << "Enter the size of array: ";
    int n; cin >> n;
    cout << "Enter the weight: ";
    vector<int> weight(n);
    for (int i = 0; i < n; i++) cin >> weight[i];
    cout << "Enter the value: ";
    vector<int> value(n);
    for (int i = 0; i < n; i++) cin >> value[i];
    cout << "Enter the value of bag: ";
    int w; cin >> w;
    vector<pair<double, pair<int, int>>> x;
    for (int i = 0; i < n; i++) {
        double rat = (double)value[i] / weight[i];
        x.push_back({rat, {weight[i], value[i]}});
    }
    float total = 0;
    sort(x.begin(),x.end());
    for (auto &item : x) {
        //cout << "Ratio: " << item.first << ", Value: " << item.second.first << ", Weight: " << item.second.second << endl;
        if(item.second.first<=w){
            total += item.second.second;
            w-=item.second.first;
        }
        else{
            total += item.first*w;
            break;
        }
    }
    cout << "Maximum value in the knapsack: " << total << '\n'; 
    return 0;
}

/*
time complexity: O(n logn)
space complexity: O(n)

input:
3
10 20 30
60 100 120
50

output:
Maximum value in the knapsack: 220
*/
 
