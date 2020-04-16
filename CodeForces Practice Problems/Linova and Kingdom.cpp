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
int n,m;
vector<int> adj[N];
vector<ll> a;
bool vis[N];
 
int dfs(int u,ll s)
{
    vis[u] = true;
    ll ans = s;
    int child = 0;
    for(auto v : adj[u])
    {
        if(!vis[v])
        {
            child += dfs(v,s+1);
        }
    }
    ans -= child;
    // vis[u] = false;
    a.pb(ans);
    // cout<<u<<" "<<child<<" "<<ans<<"\n";
    return child + 1;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
 
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
 
    dfs(1,0);
    sort(all(a));
    // for(auto i : a)
    //     cout<<i<<" ";
    // cout<<"\n";
    ll ans = 0;
    int k = a.size() - 1;
    while(m--)
    {
        ans += a[k];
        k--;
    }
    cout<<ans;
    return 0;
}
