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

const       int N =         (int)1e5 + 9;
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

void solve() {
    ll k;
    cin>>k;

    string s = "codeforces";
    vector<int> a(10,1);

    while(1) {
        forr(i,0,10) {
            ll v = 1;
            forr(j,0,10) v *= a[j];
            if(v >= k) {
                
                for(int j=0;j<10;j++) {
                    while(a[j] > 0) {
                        a[j]--;
                        cout<<s[j];
                    }
                }

                return;

            }

            a[i]++;
        }
    }
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
