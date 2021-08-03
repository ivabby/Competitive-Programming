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
    int n,u,v,m;
    cin>>n>>m;

    vector<int> a(n+1,0);
    int ans = 0;

    // cout<<ans<<" "<<n<<"\n";
    forr(i,0,m) {
        cin>>u>>v;
        if(u > v) swap(u,v);
        a[u]++;

        if(a[u] == 1) ans++;
    }

    int q;
    cin>>q;
    while(q--) {
        int c;
        cin>>c;
        if(c == 1) {
            cin>>u>>v;
            if(u > v) swap(u,v);
            a[u]++;

            if(a[u] == 1) ans++;
        } else if(c == 2) {
            cin>>u>>v;
            if(u > v) swap(u,v);

            a[u]--;
            if(a[u] == 0) ans--;
        } else {
            cout<<n-ans<<"\n";
        }
    }


}

int main()
{
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);    
    
    
    int t = 1;
    // cin>>t;
    while(t--) {
        // cout<<"hi";
        solve();
    }
    

    return 0;
}
