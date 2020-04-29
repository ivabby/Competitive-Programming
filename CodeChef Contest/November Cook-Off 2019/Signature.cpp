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
const int N = (int)100 + 9;
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
int a[N][N];
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
        int a[N][N],b[N][N];
        forr(1,105)
            for(int j=1;j<=105;j++)
                b[i][j] = 0;
        cin>>n>>m;
        forr(1,n)
        {
            string s;
            cin>>s;
            for(int j=1;j<=m;j++)
            {
                a[i][j] = int(s[j-1]) - 48;
            }
        }

        forr(1,n)
        {
            string s;
            cin>>s;
            for(int j=1;j<=m;j++)
            {
                b[i][j] = int(s[j-1]) - 48;
            }
        }

        ll mini = INT_MAX;
        ll cnt = 0;
        for(int row = -n ; row<=n;row++)
            for(int column = -m;column<=m;column++)
            {
                ll cnt = 0;
                for(int i=1;i<=n;i++)
                    for(int j=1;j<=m;j++)
                    {
                        if(a[i][j] != b[i+row][j+column])
                            cnt++;
                    }
                // cout<<row<<" "<<column<<" "<<cnt<<" ";
                mini = min(mini , cnt);
                // cout<<mini<<" \n";
            }

        // if(mini == INT_MAX) mini = 0;
        cout<<mini<<"\n";
    }
    return 0;
}
