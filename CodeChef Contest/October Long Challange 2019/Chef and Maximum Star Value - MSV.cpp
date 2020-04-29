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
const int M = (int)1e6 + 1;
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
int t,n,a[N];
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
        int c[M];
        cin>>n;
        memset(c,0,sizeof c);
        forr(1,n) cin>>a[i];
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            ans=max(ans,c[a[i]]);
            // cout<<a[i]<<" ";
            c[a[i]]++;
            int sq = ceil(sqrt(a[i]));
            if(sq*sq == a[i] && sq>1)
            {
                c[sq]++;
                sq--;
            }

            for(int j=2;j<sq;j++)
                if(a[i]%j == 0)
                {   
                    c[j]++;
                    c[a[i]/j]++;
                }
        }
        cout<<ans<<"\n";
    }
    return 0;
}