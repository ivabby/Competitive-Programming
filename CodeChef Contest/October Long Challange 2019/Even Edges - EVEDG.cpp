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
int t,n,m,u,v,c[N];
vector<int> adj[N];
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
        cin>>n>>m;
        forr(1,n)
        {
            c[i] = 1;
            adj[i].clear();
        }
        forr(1,m)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        int k = 1;
        if(m%2 == 1)
        {
            bool odd = false;
            for(int i=1;i<=n;i++)
                if(adj[i].size()%2 == 1)
                {
                    k = 2;
                    odd = true;
                    c[i] = 2;
                    break;
                }
            if(!odd)
            {
                for(int i=1;i<=n;i++)
                    if(adj[i].size()%2 == 0 && adj[i].size()>0)
                    {
                        k = 3;
                        c[i] = 2;
                        c[adj[i][0]] = 3;
                        break;
                    }
            }
        }

        cout<<k<<"\n";
        forr(1,n) cout<<c[i]<<" ";
        cout<<"\n";

    }
    return 0;
}