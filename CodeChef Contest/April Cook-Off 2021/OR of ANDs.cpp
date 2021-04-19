#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
const int N = (int)1e5 + 9;
const int INF=1e9+7;
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
    int n,q;
    cin>>n>>q;

    vector<ll> a(n+10);
    vector<ll> cnt(50,0);
    fore(i,1,n) {
        cin>>a[i];
        forr(j,0,32) {
            ll num = 1<<j;
            if((a[i] & num)) {
                cnt[j]++;
            }   
        }
    } 

    ll ans = 0;
    forr(i,0,32) {
        if(cnt[i]) {
            ans |= (ll)(1<<i);
        }
    }

    cout<<ans<<"\n";

    while(q--) {
        int pos;
        ll x;
        cin>>pos>>x;
        ans = 0;
        forr(j,0,32) {
            ll num = 1<<j;
            if((a[pos] & num)) {
                cnt[j]--;
            }   
            if((x & num)) {
                cnt[j]++;
            }

            if(cnt[j]) {
                ans |= (ll)(1<<j);
            }
        }

        a[pos] = x;
        cout<<ans<<"\n";
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
    cin>>t;
    while(t--) {
        solve();
    }
    
    
    return 0;
}
