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
int n,m;
ll weight = 0;
set<int> adj[N] , unadded;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }

    forr(1,n) unadded.insert(i);

    forr(1,n)
    {
        if(unadded.count(i))
        {
            weight++;
            queue<int> q;
            q.push(i);
            unadded.erase(i);
            while (q.size())
            {
                auto c = q.front();
                q.pop();
                vector<int> cool;
                for(auto j : unadded) if(!adj[c].count(j)) cool.pb(j);

                for(auto j : cool)
                {
                    q.push(j);
                    unadded.erase(j);
                }
            }
        }
    }

    cout<<weight-1;
    return 0;
}
