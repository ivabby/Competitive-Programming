#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
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
#define     pii             pair<int,int>
#define     ll              long long
#define     pii             pair<int,int>
#define     pll             pair<long,long>

const       int N =         (int)2e5 + 9;
const       int INF =       1e9+7;

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

ll a[N];

void solve() {
    int n;
    ll k;

    cin>>n>>k;
    map<int,int> m;
    int mx = 0;

    forr(i,0,n){
        cin>>a[i];
        a[i] = a[i]%k;
        if(a[i] == 0) continue;
        int val = k - a[i];
        m[val]++;
        mx = max(mx , m[val]);
    }

    ll ans = 0;
    for(auto i: m) {
        if(i.second == mx) {
            ans = k * 1ll * (i.second - 1) + i.first + 1;
        }
    }

    cout<<ans<<"\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    
    
    return 0;
}
