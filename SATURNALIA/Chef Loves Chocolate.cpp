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
const int N = (int)1e3 + 50;
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
int t,n,m;
int a[N][N],b[N][N];
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
            for(int j=1;j<=m;j++)
            {
                b[i][j] = INT_MIN;
                cin>>a[i][j];
            }

        for(int i=n+1;i<=n+3;i++)
            for(int j=m+1;j<=m+3;j++)
                b[i][j] = INT_MIN;
        b[1][1] = a[1][1];
        forr(1,n)
        {
            for(int j=1;j<=m;j++)
            {
                b[i+1][j] = max(b[i+1][j] , (b[i][j] + a[i+1][j]));
                b[i+1][j+1] = max(b[i+1][j+1] , (b[i][j] + a[i+1][j+1]));
                b[i][j+1] = max(b[i][j+1] , b[i][j] + a[i][j+1]);
            }
        }
        cout<<b[n][m]<<"\n";
    }
    return 0;
}
