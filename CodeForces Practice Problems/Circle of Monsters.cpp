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
const int N = (int)100 + 9;
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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n) , b(n) , c(n);
        ll ans = LONG_LONG_MAX , s = 0;
        forr(0,n-1) cin>>a[i]>>b[i];

        forr(0,n-1)
        {

            if(i == 0)
            {
                c[i] = max((ll) 0 , a[i] - b[n-1]);
            }
            else{
                c[i] = max((ll) 0 , a[i] - b[i-1]);
            }
            s += c[i];
        }

        if(n == 1) cout<<a[0]<<"\n";
        else{
            forr(0,n-1)
            {
                ans = min(ans , s - c[i] + a[i]);
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
