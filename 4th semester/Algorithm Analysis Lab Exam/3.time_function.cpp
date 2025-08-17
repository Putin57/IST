#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>& a){
    int n=a.size();
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
}

vector<int> quick_sort(vector<int> a){
    if(a.size()<=1) return a;
    int pivot=a[0]; vector<int> L,G;
    for(int i=1;i<a.size();i++) (a[i]<=pivot?L:G).push_back(a[i]);
    auto left=quick_sort(L), right=quick_sort(G);
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}

int main(){
    int n; cin>>n;
    vector<int> a(n); for(int &x:a) cin>>x;
    auto b=a,q=a;

    clock_t s=clock();
    bubble(b);
    clock_t e=clock();
    cout<<fixed<<setprecision(6);
    cout<<"Bubble sort time: "<<double(e-s)/CLOCKS_PER_SEC<<" sec\n";

    s=clock();
    q=quick_sort(q);
    e=clock();
    cout<<"Quick sort time: "<<double(e-s)/CLOCKS_PER_SEC<<" sec\n";
}
