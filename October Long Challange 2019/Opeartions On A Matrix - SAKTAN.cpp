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
ll t,n,m,q,x,y;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt" , "r" , stdin);
    // // freopen("out.txt" , "w" , stdout);
    // #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>q;
        int row[n+1],column[m+1];
        memset(row,0,sizeof row);
        memset(column,0,sizeof column);
        ll oddrow = 0 , oddcolumn = 0 , evenrow = 0 , evencolumn = 0;
        evenrow = n;
        evencolumn = m;
        while(q--)
        {
            cin>>x>>y;
            if(row[x]%2 == 0)
            {
                oddrow++;
                evenrow--;
            }
            else
            {
                oddrow--;
                evenrow++;
            }
            if(column[y]%2 == 0)
            {
                oddcolumn++;
                evencolumn--;
            }
            else
            {
                oddcolumn--;
                evencolumn++;
            }
            row[x]++; column[y]++;
        }
        // cout<<oddrow<<" "<<oddcolumn<<" "<<evenrow<<" "<<evencolumn<<" ";
        ll ans = 0;
        if(oddrow > 0)
        {
            ans = oddrow * evencolumn;
        }        
        if(oddcolumn > 0)
        {
            ans = ans + (oddcolumn * evenrow);
        }
        cout<<ans<<"\n";
    }
    return 0;
}