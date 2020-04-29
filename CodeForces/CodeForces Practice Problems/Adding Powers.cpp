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
bool m[105];
int n,k;
bool check(ll a,int step)
{
    if(a == 0) return 1;
    else if(a%k == 0) return check(a/k , step+1);
    else if(a%k == 1)
    {
        if(m[step] == 1) return 0;
        m[step] = 1;
        return check(a/k , step+1);
    }
    return 0;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        memset(m , 0 , sizeof m);
        cin>>n>>k;
        vector<ll> a(n);

        forr(0,n-1) cin>>a[i];

        string ans = "YES";
        forr(0,n-1)
            if(!check(a[i] , 0))
            {
                ans = "NO";
                break;
            }

        cout<<ans<<"\n";
    }
    
    return 0;
}
