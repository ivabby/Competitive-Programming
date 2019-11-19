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
int t,n,k;
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
        bool vis[35];
        memset(vis,false,sizeof vis);
        char ch[35];
        cin>>k>>n;
        forr(1,n) cin>>ch[i];

        int cnt = 0;
        forr(1,n)
        {
            if(ch[i] == 'S')
            {
                for(int j=max(1,i-k);j<=min(n,i+k);j++)
                {
                    if(ch[j] == 'N' && vis[j] == false)
                    {
                        // cout<<i<<" "<<j<<"\n";
                        vis[j] = true;
                        cnt++;
                        break;
                    }
                }
            }
        }

        cout<<cnt<<"\n";
        // cout<<"\n";
    }
    return 0;
}
