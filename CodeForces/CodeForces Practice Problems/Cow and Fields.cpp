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
const int N = (int)2e5 + 9;
const int INF = 1e9 + 9;
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
int n,m,k;
vector<int> edge[N],a;
int p[N] , s[N];
int q[200005];
void bfs(int* dist,int s){
  std::fill(dist,dist+N,INF);
  int qh=0,qt=0;
  q[qh++]=s;
  dist[s]=0;
  while(qt<qh){
    int x=q[qt++];
    for(int y:edge[x]){
      if(dist[y]==INF){
	dist[y]=dist[x]+1;
	q[qh++]=y;
      }
    }
  }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n>>m>>k;
    forr(i,0,k)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    sort(all(a));

    forr(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        edge[x].pb(y);
        edge[y].pb(x);
    }

    bfs(p , 1);
    bfs(s , n);

    vector<pii> data;
    forr(i,0,k)
    {
        data.pb(mp(p[a[i]] - s[a[i]] , a[i]));
    }

    sort(all(data));

    int best = 0 , mx = -INF;
    for(auto i : data)
    {
        int a = i.second;
        best = max(best , mx + s[a]);
        mx = max(mx , p[a]);
    }

    cout<<min(best + 1 , p[n]);

    
    
    return 0;
}
