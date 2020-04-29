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
queue<int> q;
ll ans = 0;
vector<int> res;
map<int,int> d;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    forr(0,n-1)
    {
        int x;
        cin>>x;
        q.push(x);
        d[x] = 0;
    }
    
    int cnt = 0;
    while(!q.empty())
    {
        if(res.size() == m) break;
        int cur = q.front();
        q.pop();
        if(d[cur] != 0)
        {
            ans+=d[cur];
            res.pb(cur);
        }

        if(!d.count(cur - 1))
        {
            d[cur - 1] = d[cur] + 1;
            q.push(cur - 1);
            cnt++;
        }
        if(!d.count(cur + 1))
        {
            d[cur+1] = d[cur] + 1;
            q.push(cur + 1);
            cnt++;
        }
    }

    cout<<ans<<"\n";
    for(auto i : res)cout<<i<<" ";
    
    return 0;
}
