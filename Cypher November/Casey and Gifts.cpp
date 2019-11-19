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
int n,m,parent[1001];
int find(int a)
{
    if(parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}
void merge(int a,int b)
{
    a = find(a);
    b = find(b);
    if(a != b)
        parent[a] = b;
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
    forr(1,n) parent[i] = i;
    forr(1,m)
    {
        int u,v;
        cin>>u>>v;
        merge(u,v);
    }

    int cnt = 0;
    vector<int> adj[1001];
    forr(1,n)
        adj[find(i)].pb(i);

    forr(1,n)
        if(adj[i].size()>0)
            cnt++;

    cout<<cnt;
    return 0;
}
