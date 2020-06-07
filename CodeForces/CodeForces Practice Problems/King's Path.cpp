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
#define pll pair<long,long>
#define ll long long
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
struct Node{
    int x,y,cnt;
    Node(int xx,int yy,int c)
    {
        x = xx;
        y = yy;
        cnt = c;
    }
};
int x,y,fx,fy,n;
set<pii> s;
map<pii,int> m;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>x>>y>>fx>>fy>>n;
    
    fore(i,1,n)
    {
        int x,a,b;
        cin>>x>>a>>b;
        fore(j,a,b)
            s.insert(mp(x,j));
    }

    queue<pii> q;
    q.push(mp(x,y));
    m[mp(x,y)] = 0;

    while(!q.empty())
    {
        int cnt = m[q.front()];
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        fore(i,-1,1)
            fore(j,-1,1)
            {
                pii p = mp(r + i , c + j);
                if(!s.count(p)) continue;
                if(m.count(p)) continue;

                m[p] = cnt + 1;
                q.push(p);
            }
    }

    if(m.count(mp(fx,fy))) cout<<m[mp(fx,fy)];
    else cout<<"-1";
    
    return 0;
}
