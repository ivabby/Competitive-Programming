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
const int N = (int)5e5 + 9;
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

int n,m;
vector<int> adj[N];
vector<int> color[N];
vector<int> last(N) , ans(N);

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    IOS;
    
    cin>>n>>m;
    forr(1,m)
    {
        int x,y;
        cin>>x>>y;

        adj[x].pb(y);
        adj[y].pb(x);
    }

    forr(1,n)
    {
        int x;
        cin>>x;

        color[x].pb(i);
    }

    vector<int> res;
    forr(1,N)
    {
        for(auto u : color[i])
        {
            for(auto v : adj[u])
                last[ans[v]] = u;

            ans[u] = 1;
            while(last[ans[u]] == u)
                ++ans[u];

            if(ans[u] != i)
            {
                cout<<"-1";
                return 0;
            }

            res.pb(u);
        }
    }

    for(auto i : res) cout<<i<<" ";
    return 0;
}
