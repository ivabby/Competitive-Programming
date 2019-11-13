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
ll t,x,y;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x == y)
        {
            cout<<"YES\n";
            continue;
        }
        if(x == 2)
        {
            if(y<=3) cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        while(x>3)
        {
            if(x%2 == 1)
            {
                x-=1;
            }
            else
            {
                x = (3*x)/2;
            }
            if(x>=y) break;
        }
        if(y<=x) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
