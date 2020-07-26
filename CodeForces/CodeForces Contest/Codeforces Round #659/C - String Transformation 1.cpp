#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
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
bool vis[20];
vector<vector<int>> adj(20);

void dfs(int u)
{
    vis[u] = true;
    for(auto v : adj[u])
        if(!vis[v])
            dfs(v);
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;

        forr(i,0,20)
            adj[i].clear();

        bool ans = true;
        forr(i,0,n)
        {
            if(a[i] == b[i]) continue;
            if(a[i] > b[i]) ans = false;
            else
            {
                adj[a[i] - 'a'].pb(b[i] - 'a');
                adj[b[i] - 'a'].pb(a[i] - 'a');
            }
        }
        if(ans) {
            memset(vis , false , sizeof vis);
            int ans = 20;
            forr(i,0,20)
            {
                if(!vis[i])
                {
                    dfs(i);
                    ans--;
                }
            }
            cout<<ans<<"\n";
        }
        else cout<<"-1\n";
    }

    return 0;
}
