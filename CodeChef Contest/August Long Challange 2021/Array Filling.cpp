#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define     forr(i,a,n)     for (int i = (a); i < (n); ++i)
#define     fore(i,a,n)     for (int i = (a); i <= (n); ++i)
#define     ford(i,a,b)     for (int i = (a); i >= (b); --i)
#define     MAX             1000000007LL
#define     mod             998244353
#define     forn(n,a)       for(int i=n;i>=a;i--)
#define     all(x)          x.begin() , x.end()
#define     mp(x,y)         make_pair(x,y)
#define     pb(x)           push_back(x)
#define     ll              long long
#define     pii             pair<int,int>
#define     pll             pair<long,long>
const int N = (int)1e5 + 9;

ll power(ll x,ll y)
{
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}

void solve() {
    int n,m;
    cin>>n>>m;
    ll x,y;

    vector<pair<ll,ll>> a;

    forr(i,0,m) {
        cin>>x>>y;
        a.pb(mp(x,y));
    }

    sort(all(a));

    ll lcm = 1;
    ll N = n;
    ll res = 0;

    for(int i=m-1;i>=0 && n>0;i--) {
        ll first = a[i].first;

        ll gcd = __gcd(lcm , a[i].second);
        lcm = (lcm * a[i].second) / gcd;

        ll cnt = n - N/lcm;

        res += a[i].first * cnt;
        n = N/lcm;
    }

    cout<<res<<"\n";

}

int main()
{
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);    
    
    
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    

    return 0;
}
