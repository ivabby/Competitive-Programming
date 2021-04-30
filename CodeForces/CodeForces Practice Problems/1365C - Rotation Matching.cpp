#include<bits/stdc++.h>
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
    int n;
    cin>>n;

    vector<int> cnt(n,0);
    map<int,int> m;

    fore(i,1,n) {
        int x;
        cin>>x;
        m[x] = i;
    }

    int ans = 0;

    fore(i,1,n) {
        int x;
        cin>>x;

        int shift = 0;
        if(m[x] >= i) {
            shift = m[x]-i;
        } else {
            shift = n-i+m[x];
        }
        cnt[shift]++;
        ans = max(ans , cnt[shift]);
        // cout<<x<<" "<<shift<<"\n";
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
    // cin>>t;
    while(t--) {
        solve();
    }
    

    return 0;
}
