#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the weight: ";
    vector<int> weight(n);
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    cout << "Enter the value: ";
    vector<int> value(n);
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }
    cout << "Enter the value of bag: ";
    int w; cin >> w;
 
    vector<pair<double, pair<int, int>>> x;
    for (int i = 0; i < n; i++) {
        double rat = (double)value[i] / weight[i];
        x.push_back({rat, {value[i], weight[i]}});
    }
    int total = 0;
    sort(x.begin(),x.end());
    for (auto &item : x) {
        //cout << "Ratio: " << item.first << ", Value: " << item.second.first << ", Weight: " << item.second.second << endl;
        if(item.second.second<=w){
            total += item.second.first;
            w-=item.second.second;
        }
        else{
            total += item.first*w;
            break;
        }
    }
 
    return 0;
}
 
