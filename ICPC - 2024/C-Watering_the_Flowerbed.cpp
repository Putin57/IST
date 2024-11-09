#include <bits/stdc++.h>
using namespace std;
struct custom_hash{
static uint64_t splitmix64(uint64_t x){x+=0x9e3779b97f4a7c15;x=(x^(x>>30))*0xbf58476d1ce4e5b9;x=(x^(x>>27))*0x94d049bb133111eb;return x^(x>>31);}
size_t operator()(uint64_t x)const{static const uint64_t FIXED_RANDOM=chrono::steady_clock::now().time_since_epoch().count();return splitmix64(x+FIXED_RANDOM);}};
#define all(x) x.begin(),x.end()
#define sortt(x) sort(all(x))
#define ulta(x) reverse(all(x))
#define get(x) getline(cin,x)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define elif else if
#define bin_search(x,y) binary_search(all(x),y)
#define maxx(x) *max_element(all(x))
#define minn(x) *min_element(all(x))
#define PI acos(-1)
#define fill(x,y) fill(all(x),y)
#define dot(x) fixed << setprecision(x)
#define count(x,y) count(all(x),y)
typedef set<int> si;typedef unsigned int ui;typedef unsigned long long ull;typedef long long int ll;typedef vector<ll> vll;typedef deque<char> dqc;typedef vector<string> vs;
typedef double dl;typedef vector<int> vi;typedef vector<dl> vdl;typedef deque<int> dqi;typedef deque<dl> dqdl;typedef deque<string> dqs;typedef vector<char> vc;typedef deque<ll> dqll;
template<class xyz>xyz factorial(xyz n){vll arr(n,0);arr[1]=1;for(int i=2;i<=n;i++){arr[i]=arr[i-1]*i;}return arr[n];}
template<typename Find,typename T>int find(const Find &v,const T &n){auto it=find(all(v),n);if(it==v.end())return -1;else return distance(v.begin(),it);}
template<typename T>auto sum(T&v)->typename decay<decltype(*v.begin())>::type{using x=typename decay<decltype(*v.begin())>::type;x num=0;for(auto &i:v)num+=i;return num;}


void test_case(){
  int n, k; cin >> n >> k;
  ll ans = 0;
  for(int i = 0; i < n; i++){
    int x, y; cin >> x >> y;
    ans += k/x;
  }
  cout << ans << '\n';

}


int main() {
  FastIO
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  int t = 1;
  cin >> t;  
  for (int cs = 1; cs <= t; cs++){
  cout << "Case " << cs << ": ";
  test_case();}
  return 0;
}
