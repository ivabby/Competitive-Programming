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
const int N = (int)3e5 + 9;
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
int n,m,u,v,p;
vector<pair<int,int>> w[N];
int d[N] , t[N];
int main()
{
	cin.tie(NULL);
    cin>>n>>m;

    while(m--)
    {
        cin>>u>>v>>p;
        w[p].pb(mp(u,v));
    }

    for(int i=0;i<N;i++)
    {
        for(auto j : w[i])
        {
            u = j.first;
            v = j.second;
            t[v] = 0;
        }

        for(auto j : w[i])
        {
            u = j.first;
            v = j.second;
            t[v] = max(t[v] , d[u] + 1);
        }

        for(auto j : w[i])
        {
            u = j.first;
            v = j.second;
            d[v] = max(d[v] , t[v]);
        }
    }

    int ans = 0;
    for(int i=1;i<=n;i++)
        ans = max(ans , d[i]);

    cout<<ans;
    return 0;
}
