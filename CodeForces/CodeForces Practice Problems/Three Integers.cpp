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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,ans = LONG_LONG_MAX;
        ll v1,v2,v3;
        cin>>a>>b>>c;
        for(int i=1;i<=11000;i++)
            for(int j=i;j<=11000;j+=i)
                for(int k=j;k<=11000;k+=j)
                    if((abs(i-a) + abs(j-b) + abs(k-c)) < ans)
                    {
                        ans = abs(i-a) + abs(j-b) + abs(k-c);
                        v1 = i;
                        v2 = j;
                        v3 = k;
                    }

        cout<<ans<<"\n";
        cout<<v1<<" "<<v2<<" "<<v3<<"\n";
    }
    return 0;
}
