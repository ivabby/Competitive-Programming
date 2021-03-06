#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,x,y;
    cin>>n>>x>>y;
    vector<pair<int,int>> a(n);
    forr(0,n-1) cin>>a[i].first>>a[i].second;

    vector<int> v(x) , w(y);
    forr(0,x-1) cin>>v[i];
    forr(0,y-1) cin>>w[i];

    sort(all(v));
    sort(all(w));

    ll ans = LONG_LONG_MAX;
    forr(0,n-1)
    {
        auto lower = lower_bound(w.begin() , w.end() , a[i].second);
        auto upper = upper_bound(v.begin() , v.end() , a[i].first);
        if(lower == w.end() || upper == v.begin())
            continue;

        upper--;
        ll p = *lower - *upper + 1;
        ans = min(ans , p);
    }

    cout<<ans;

    
    return 0;
}
