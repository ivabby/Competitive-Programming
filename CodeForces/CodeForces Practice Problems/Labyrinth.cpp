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
const int N = (int)2e3 + 9;
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
    int r,c,x,y;
    Node(int lll,int rr,int xx,int yy)
    {
        r = lll;
        c = rr;
        x = xx;
        y = yy;
    }
};
bool vis[N][N];

int n,m,r,c,x,y;
char a[N][N];
bool check(int xx,int yy)
{
    if(xx>0 && yy>0 && xx<=n && yy<=m)
        return true;
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n>>m>>r>>c;
    cin>>x>>y;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];


    deque<Node> q;
    q.push_back(Node(r,c,x,y));
    int ans = 0;
    while(!q.empty())
    {
        Node n = q.front();
        q.pop_front();
        
        if(vis[n.r][n.c]) continue;

        ans++;
        vis[n.r][n.c] = true;
        if(check(n.r-1 , n.c) && a[n.r-1][n.c] == '.')
            q.push_front(Node(n.r-1,n.c,n.x,n.y));
        if(check(n.r+1,n.c) && a[n.r+1][n.c] == '.')
            q.push_front(Node(n.r+1,n.c,n.x,n.y));
        if(check(n.r,n.c-1) && a[n.r][n.c-1] == '.' && n.x>0)
            q.push_back(Node(n.r,n.c-1,n.x-1,n.y));
        if(check(n.r,n.c+1) && a[n.r][n.c+1] == '.' && n.y>0)
            q.push_back(Node(n.r,n.c+1,n.x,n.y-1));
    }
    cout<<ans;
    
    return 0;
}
