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
const int N = 510;
int n,m,u,v;
int edge[N];
bool b[N][N];
char s[N];
bool check(char a,char b)
{
    return a == b || a == 'b' || b == 'b';
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    forr(1,m)
    {
        cin>>u>>v;
        b[u][v] = true;
        b[v][u] = true;
        edge[u]++;
        edge[v]++;
    }

    forr(1,n)
        if(edge[i] == n-1)
            s[i] = 'b';

    forr(1,n)
        if(s[i] == 0)
        {
            s[i] = 'a';
            for(int j=1;j<=n;j++)
                if(s[j] == 0)
                    s[j] = b[i][j] ? 'a' : 'c';
        }

    bool f = true;
    forr(1,n)
        for(int j=1;j<=n;j++)
            if(i != j)
            {
                if(check(s[i] , s[j]) != b[i][j])
                    f = false;
            }

    if(f)
    {
        cout<<"Yes\n";
        for(int i=1;i<=n;i++)
            cout<<s[i];
    }
    else
        cout<<"No\n";
    
    return 0;
}
