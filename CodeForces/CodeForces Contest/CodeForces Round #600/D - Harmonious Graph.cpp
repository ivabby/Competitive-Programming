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
int mini,maxi;
vector<int> adj[N];
set<int> s;
vector<pair<int,int>> p;
bool vis[N];
 
void dfs(int u)
{
    vis[u] = true;
    mini = min(mini , u);
    maxi = max(maxi , u);
    for(auto v : adj[u])
        if(!vis[v])
            dfs(v);
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    forr(1,m)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        s.insert(u);
        s.insert(v);
    }
 
    for(int i=1;i<=n;i++)
        if(!vis[i])
        {
            mini = i;
            maxi = i;
            dfs(i);
            p.pb(mp(mini,maxi));
        }
 
    int maxi = -1;
    ll ans = 0;
    for(auto i : p)
    {
        if(i.first <= maxi){
            ++ans;
        }
        maxi = max(maxi , i.second);
    }
    cout<<ans<<"\n";
    return 0;
}
