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
ll dp[N] , u[N];

void solve() {
    int n;

    cin>>n;
    map<int,vector<ll>> m;

    for(int i=1;i<=n;i++) cin>>u[i];

    for(int i=1;i<=n;i++) {
        ll x;
        cin>>x;
        m[u[i]].pb(x);
    }

    for(auto i: m) {
        vector<ll> v = i.second;
        sort(all(v));

        int sz = v.size();

        for(int i=1;i<sz;i++) {
            v[i] += v[i-1];
        }


        for(int i=0;i<sz;i++) {
            dp[i] += v[sz-1];
            int d = sz/(i+1);
            d = sz - d*(i+1) - 1;
            if(d >= 0) {
                dp[i] -= v[d];
            }
        }

    }

    for(int i=0;i<n;i++) {
        cout<<dp[i]<<" ";
        dp[i] = 0;
    }

    cout<<"\n";


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
