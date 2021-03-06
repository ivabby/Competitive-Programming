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
const int N = (int)2e5 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

ll power(ll x,ll y)
{
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    ll d = 0;
    ll maxi = 0 , mini = 1e10;
    map<ll,ll> m;

    forr(1,n)
    {
        ll a;
        cin>>a;
        m[a]++;
        maxi = max(maxi , a);
        mini = min(mini , a);
    }
    ll ans = m[maxi] * m[mini];
    if(maxi == mini)
        ans = (m[maxi] * (m[maxi] - 1))/2;
    cout<<maxi - mini<<" "<<ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    solve();
    return 0;
}
