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
const int N = (int)5e4 + 9;
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

int n,k;
vector<int> adj[N];
int C[N][510];
ll ans  = 0;

void dfs(int u,int p)
{
    C[u][0] = 1;
    for(auto v : adj[u])
    {
        if(v == p)  continue;
        dfs(v , u);
        for(int j=0;j<k && (k-j-1)>=0;j++)
            ans += 1LL*C[v][j]*C[u][k-j-1];
        
        for(int j=0;j<k;j++)
            C[u][j+1] += C[v][j];
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n>>k;

    forr(1,n-1)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(0 , -1);
    cout<<ans<<"\n";
    
    return 0;
}
