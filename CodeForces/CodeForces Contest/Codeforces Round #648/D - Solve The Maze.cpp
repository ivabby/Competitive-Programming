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
char a[60][60];
bool vis[60][60];
int n,m;
bool check(int rr,int cc)
{   
    if(rr>=1 && cc>=1 && rr<=n && cc<=m)
        return true;
    return false;
}
bool dfs(int r,int c)
{
    if(r == n && c == m)
        return true;
    bool f = false;
    vis[r][c] = true;
    if(check(r+1,c) && a[r+1][c] != 'B' && a[r+1][c] != '#' && !vis[r+1][c])
        f = f || dfs(r+1,c);
    if(check(r-1,c) && a[r-1][c] != 'B' && a[r-1][c] != '#' && !vis[r-1][c] && !f)
        f = f || dfs(r-1 , c);
    if(check(r,c+1) && a[r][c+1] != 'B' && a[r][c+1] != '#' && !vis[r][c+1] && !f)
        f = f || dfs(r,c+1);
    if(check(r,c-1) && a[r][c-1] != 'B' && a[r][c-1] != '#' && !vis[r][c-1] && !f)
        f = f || dfs(r,c-1);
    return f;
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

        fore(i,0,59)
            fore(j,0,59)
            {
                a[i][j] = '#';
                vis[i][j] = false;
            }

        cin>>n>>m;
        int g = 0 , b = 0;
        fore(i,1,n)
            fore(j,1,m)
            {
                cin>>a[i][j];
                if(a[i][j] == 'G') g++;
            }

        if(g == 0)
            cout<<"Yes\n";
        else
        {
            string ans = "Yes";
            fore(i,1,n)
                fore(j,1,m)
                {
                    if(a[i][j] == 'B')
                    {
                        if(a[i-1][j] == 'G' || a[i+1][j] == 'G' || a[i][j-1] == 'G' || a[i][j+1] == 'G')
                            ans = "No";
                        else
                        {
                            if(a[i-1][j] != 'B')
                                a[i-1][j] = '#';
                            if(a[i+1][j] != 'B')
                                a[i+1][j] = '#';
                            if(a[i][j-1] != 'B')
                                a[i][j-1] = '#';
                            if(a[i][j+1] != 'B')
                                a[i][j+1] = '#';
                        }
                    }
                }

            if(ans == "Yes")
            {
                queue<pii> q;
                q.push(mp(n,m));
                while(!q.empty())
                {
                    pii p = q.front();
                    q.pop();
                    int x = p.first;
                    int y = p.second;

                    vis[x][y] = true;
                    if(a[x][y] == 'B')
                    {
                        ans = "No";
                        break;
                    }
                    if(a[x][y] == 'G')
                        g--;

                    if(check(x+1,y) && vis[x+1][y] == false && a[x+1][y] != '#')
                    {
                        vis[x+1][y] = true;
                        q.push(mp(x+1 , y));
                    }
                    if(check(x-1,y) && vis[x-1][y] == false && a[x-1][y] != '#')
                    {
                        vis[x-1][y] = true;
                        q.push(mp(x-1 , y));
                    }
                    if(check(x,y-1) && vis[x][y-1] == false && a[x][y-1] != '#')
                    {
                        vis[x][y-1] = true;
                        q.push(mp(x , y-1));
                    }
                    if(check(x,y+1) && vis[x][y+1] == false && a[x][y+1] != '#')
                    {
                        vis[x][y+1] = true;
                        q.push(mp(x , y+1));
                    }
                }
                if(g != 0)
                    ans = "No";
            }

            cout<<ans<<"\n";

            
        }
    }
    
    return 0;
}
